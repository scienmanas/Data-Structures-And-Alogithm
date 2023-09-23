#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string reverseWords(string s)
{
    string word;
    string final_;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ' && i==0) {
            while (i<s.length() && s[i] == ' ')
            {
                i++;
            }
        }
        if (s[i] == ' ')
        {
            reverse(word.begin(), word.end());
            final_ += word + ' ';

            word.clear();
            while (i<s.length() && s[i] == ' ')
            {
                i++;
            }
        }
        if (i>=s.length()){
            break;
        }
        word += s[i];
    }
    if(word.length()>0) {
        reverse(word.begin(),word.end());
        final_ += word;
    }
    if (final_[final_.length()-1] == ' '){
        final_.pop_back();
    }
    reverse(final_.begin(), final_.end());
    return final_;
}

int main()
{
    string s = "Poddar Manas";
    cout << "Result: " << reverseWords(s) << endl;
    // reverse(s.begin(),s.end());
    // s.clear();
    // cout<<"Manas Poddar: "<<s<<endl;
}