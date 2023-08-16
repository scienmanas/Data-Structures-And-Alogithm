#include <iostream>
#include <algorithm>

using namespace std;

bool IsCharcater(char ch)
{
    if ((ch >= 48 && ch <= 57) || (ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
        return 1;
    return 0;
}

void ReverseTheString(string &s)
{ // Working
    int n = s.length();
    string reverseone = s;
    int st = 0;
    int e = n - 1;
    while (st <= e)
    {
        swap(reverseone[st], reverseone[e]);
        st++;
        e--;
    }
    s = reverseone;
}

bool CheckPalindrome(string &s)
{
    int st = 0;
    int e = s.length() - 1;
    while (st <= e)
    {
        if (s[st] != s[e])
            return false;
        st++;
        e--;
    }
    return true;
}

bool CheckPalindromeWithRemovedSpacesAndNonAlphaNumericCharacters(string &s)
{
    int st = 0;
    int e = s.length() - 1;
    while (st <= e)
    {
        if (!IsCharcater(s[st]))
        {
            st++;
            continue;
        }
        if (!IsCharcater(s[e]))
        {
            e--;
            continue;
        }
        if (tolower(s[st]) != tolower(s[e]))
            return false;
        st++;
        e--;
    }
    return true;
}

int main()
{
    // string s = "AABCDEFFEDCBAA$#%^$";
    string s = "A man, a plan, a canal: Panama";
    // ReverseTheString(s);
    // cout<<"Reversed String: "<<s<<endl;
    cout<<"Is Palindrome: "<<CheckPalindrome(s)<<endl;
    cout << "Is Plaindrome with faltu ke character hatake: " << CheckPalindromeWithRemovedSpacesAndNonAlphaNumericCharacters(s) << endl;
}