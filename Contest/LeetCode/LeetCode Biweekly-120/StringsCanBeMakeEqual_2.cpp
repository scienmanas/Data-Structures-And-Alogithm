#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool checkStrings(string s1, string s2)
{
    int i = 0;
    int k = 0;
    while (i + 2 < s1.length())
    {
        char ch = s2[k];
        if (s1[i] == ch)
        {
            if (s1 == s2)
            {
                return true;
            }
            else
            {
                k++;
                i++;
                continue;
            }
        }
        else
        {
            int j = i + 2;
            bool isexe = false;
            while (j < s1.length())
            {
                if (s1[j] == ch)
                {
                    swap(s1[j], s1[i]);
                    i++;
                    k++;
                    // cout << s1 << endl;
                    isexe = true;
                    break;
                }
                j += 2;
            }
            if (isexe == false)
                return false;
        }
        if (s1 == s2)
        {
            return true;
        }
    }
    if (s1 == s2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string s1 = "abcdba";
    string s2 = "cabdab";
    cout << "Result: " << checkStrings(s1, s2) << endl;
}