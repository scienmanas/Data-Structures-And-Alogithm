#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

class Solution
{
public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        vector<int> frequencyStore(26,0);
        int index_storer;
        for(int i = 0 ; i<str.length() ; i++) {
            index_storer = tolower(str[i]) - 'a';
            frequencyStore[index_storer]++;
        }

        // for (int i = 0 ; i<26 ; i++) {
        //     cout<<frequencyStore[i]<<endl;
        // }
        int maxFrequencyIndex = distance(frequencyStore.begin(), max_element(frequencyStore.begin(), frequencyStore.end()));

        return static_cast<char>('a' + maxFrequencyIndex);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        Solution obj;
        cout << obj.getMaxOccuringChar(str) << endl;
        // char ch = obj.getMaxOccuringChar(str);
    }
}