#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> final;
    if (nums.size() < 4)
    {
        return final;
    }

    int i = 0;
    while (i < nums.size() - 3)
    {
        int j = i + 1;
        while (j < nums.size() - 2)
        {
            int k = j + 1;
            int l = nums.size() - 1;
            while (k < l)
            {
                long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[k] + nums[l];
                if (sum == target)
                {
                    final.push_back({nums[i], nums[j], nums[k], nums[l]});
                    k++;
                    l--;
                    while (nums[l] == nums[l + 1] && l > k)
                    {
                        l--;
                    }
                    while (nums[k] == nums[k - 1] && k < l)
                    {
                        k++;
                    }
                }
                else if (sum > target)
                {
                    l--;
                }
                else
                {
                    k++;
                }
            }
            for (; j + 1 < nums.size() - 2; j++)
            {
                if (nums[j] == nums[j + 1])
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
            j++;
        }
        for (; i + 1 < nums.size() - 3; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                continue;
            }
            else
            {
                break;
            }
        }
        i++;
    }
    return final;
}

int main()
{
    vector<int> nums;
    int target;

    nums = {1, 0, -1, 0, -2, 2};
    target = 0;
    for (auto i : fourSum(nums, target))
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
    nums = {2, 2, 2, 2, 2};
    target = 8;
    for (auto i : fourSum(nums, target))
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}