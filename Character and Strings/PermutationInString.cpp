#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// bool checkInclusion(string s1, string s2) {
//     bool result = true;
//     for (int i = 0 ; i< s1.length() ; i++) {
//         if (s2.find(s1[i])) {
//             s2.erase(s2.find(s1[i]),1);
//             continue;
//         }
//         else {
//             return false;
//         }
//     }
//     return result;
// }

bool checkInclusion(string s1, string s2)
{
    if (s1.length() > s2.length())
        return false;

    vector<int> charchecks1(26, 0);
    for (int i = 0; i < s1.length(); i++)
    {
        charchecks1[(s1[i] - 'a')]++;
    }
    vector<int> charchecks2(26, 0);
    for (int i = 0; i < s2.length(); i++)
    {
        charchecks2.assign(charchecks2.size(), 0);
        bool isTrue = false;
        for (int j = i, repeat = 0; repeat < s1.length(); repeat++, j++)
        {
            if (j >= s2.length())
            {
                break;
            }
            charchecks2[(s2[j] - 'a')]++;
        }
        for (int k = 0; k < 26; k++)
        {
            if (charchecks1[k] == charchecks2[k])
            {
                isTrue = true;
                continue;
            }
            else
            {
                isTrue = false;
                break;
            }
        }
        if (isTrue)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string s1;
    string s2;
    s1 = "ab";
    s2 = "eidbaooo";
    s1 = "ab";
    s2 = "eidboaoo";
    cout << "Result: " << checkInclusion(s1, s2) << endl;
}