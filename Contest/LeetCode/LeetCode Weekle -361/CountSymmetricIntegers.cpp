#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool CheckSymmetry(int check)
{
    string s = to_string(check);
    if (s.length() % 2 != 0)
        return false;
    int n = s.length();
    int left = 0;
    int right = 0;
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        left += s[i] - '0';
        right += s[j] - '0';
        i++;
        j--;
    }
    if (left == right)
        return true;
    return false;
}

int countSymmetricIntegers(int low, int high)
{
    int count = 0;
    for (int i = low; i <= high; i++)
    {
        if (CheckSymmetry(i) == true)
        {
            // cout<<"Number: "<<i<<endl;
            count++;
        }
    }
    return count;
}

int main()
{

    int low = 1;
    int high = 100;

    low = 1200;
    high = 1230;

    cout << "Count: " << countSymmetricIntegers(low, high) << endl;
    return 0;
}