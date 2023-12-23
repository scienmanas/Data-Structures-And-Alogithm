#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

long long count(vector<int> &nums, int index)
{
    long long sum = 0;
    for (int i = 0; i <= index; i++)
    {
        sum += nums[i];
    }
    return sum;
}

long long largestPerimeter(vector<int>& nums)
{
    sort(nums.begin(), nums.end());
    // int count_ = 0;

    for (int i = nums.size() - 1; i > 2; i--)
    {
        long long sum = count(nums, i - 1);
        if (sum >= nums[i])
        {
            return count(nums,i);
        }
    }
    return -1;
}

int main()
{
}