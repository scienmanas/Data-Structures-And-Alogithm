#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void ReturnTheNewString(string &s)
{
    string S;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            S += "@40";
        }
        else
        {
            S += s[i];
        }
    }
    s = S;
}

void TakingNoExtraSpace(string &s)
{
    int number_of_spaces = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
            number_of_spaces++;
    }

    s.resize(s.length() + 3 * number_of_spaces);
    int j = s.size() - 1;
    for (int i = s.capacity() - 1; i >= 0; i--)
    {
        if (s[j] != ' ')
        {
            s[i] = s[j];
            j--;
        }
        else
        {
            s[i] = '0';
            i--;
            s[i] = '4';
            i--;
            s[i] = '@';
            j--;
        }
    }
}

int main()
{
    string s = "Hello I am Manas";
    cout << "Initial String: " << s << endl;
    // ReturnTheNewString(s);
    TakingNoExtraSpace(s);
    cout << "The New String: " << s << endl;
}