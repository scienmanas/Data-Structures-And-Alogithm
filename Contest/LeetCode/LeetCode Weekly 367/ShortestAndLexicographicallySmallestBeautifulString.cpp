#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

// int stringToInt(string s) {
//     int num = 0;
//     for (int i = 0; i < s.length(); i++) {
//         num = num * 10 + (s[i] - '0');
//     }
//     return num;
// }

string shortestBeautifulSubstring(string s, int k)
{
    // int str = stringToInt(s);
    vector<int> indicies;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            indicies.push_back(i);
        }
    }
    if (indicies.size() < k)
    {
        return ("");
    }
    int len = 101;
    // int start = 0;
    // int end =  0;
    for (int i = 0; i < indicies.size() - k + 1; i++)
    {
        if (len > (indicies[i + k - 1] - indicies[i] + 1))
        {
            len = indicies[i + k - 1] - indicies[i] + 1;
            // start = indicies[i];
            // end = indicies[i+k-1];
        }
    }

    vector<int> start;
    vector<int> end;

    for (int i = 0; i < indicies.size() - k + 1; i++)
    {
        if (len == (indicies[i + k - 1] - indicies[i] + 1))
        {
            start.push_back(indicies[i]);
            end.push_back(indicies[i + k - 1]);
        }
    }

    // cout<<start<<endl<<end<<endl;
    string ans = "";
    // string dummy = "";
    for (int i = 0; i < start.size(); i++)
    {
        string dummy = "";
        for (int j = start[i]; j <= end[i]; j++)
        {
            dummy += s[j];
            if (i==1) {
                ans+=dummy;
            }
            if (i>1) {
                if (stol(dummy) < stol(ans))
                {
                    ans.clear();
                    ans = dummy;
                }
            }
        }
    }

    return ans;
}

int main()
{
    string s = "100011001";
    int k = 3;
    cout << shortestBeautifulSubstring(s, k) << endl;
    // Expected:"11001"
}