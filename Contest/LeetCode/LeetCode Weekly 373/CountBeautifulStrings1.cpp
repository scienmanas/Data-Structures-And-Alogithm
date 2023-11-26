#include <iostream>
#include <vector>

using namespace std;

int count_beautiful_substrings(const string& s, int k) {
    auto is_vowel = [](char c) { return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'; };

    int n = s.length();
    int count = 0;
    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            if (i == j) {
                dp[i][j] = is_vowel(s[i]) ? 1 : 0;
            } else {
                dp[i][j] = dp[i][j - 1] + (is_vowel(s[j]) ? 1 : 0);
            }

            int consonants = j - i + 1 - dp[i][j];
            if (dp[i][j] == consonants && dp[i][j] * consonants % k == 0) {
                count += 1;
            }
        }
    }

    return count;
}

int main() {
    // Example 1
    string s1 = "baeyh";
    int k1 = 2;
    int output1 = count_beautiful_substrings(s1, k1);
    cout << output1 << endl;  // Output: 2

    // Example 2
    string s2 = "abba";
    int k2 = 1;
    int output2 = count_beautiful_substrings(s2, k2);
    cout << output2 << endl;  // Output: 3

    // Example 3
    string s3 = "bcdf";
    int k3 = 1;
    int output3 = count_beautiful_substrings(s3, k3);
    cout << output3 << endl;  // Output: 0

    return 0;
}
