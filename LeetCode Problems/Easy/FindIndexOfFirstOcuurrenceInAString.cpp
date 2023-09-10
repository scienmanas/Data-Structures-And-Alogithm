#include <iostream>
#include <vector>
#include <string>

using namespace std;

int strStr(string haystack, string needle)
{
    for (int i = 0 ; i<haystack.length() ; i++) {
        if(haystack[i] == needle[0]) {
            bool b = true;
            for(int j = 1 ; j<needle.length() ; j++) {
                if(haystack[i+j] != needle[j]) {
                    b = false;
                    break;
                }
            }
            if (b == true)
                return i;
        }
    }
    return -1;
}

int main()
{
    string haystack;
    string needle;
    haystack = "sadbutsad";
    needle = "sad";
    cout << "Result: " << strStr(haystack, needle) << endl;

    haystack = "leetcode";;
    needle = "leeto";
    cout << "Result: " << strStr(haystack, needle) << endl;
}