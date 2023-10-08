#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minOperations(string s1, string s2, int x)
{
    // check number of 0 and 1 for rejection case which happens to be second test case.
    
}

int main()
{
    string s1 = "1100011000";
    string s2 = "0101001010";
    int x = 2;
    cout << minOperations(s1 , s2 ,x);

    // string s1 = "10110";
    // string s2 = "00011";
    // int x = 4;
    // cout << minOperations(s1 , s2 ,x);
}