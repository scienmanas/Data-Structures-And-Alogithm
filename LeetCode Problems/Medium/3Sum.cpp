#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> dummy(3);

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        int j = i + 1;
        int k = nums.size() - 1;
        while (j < k)
        {
            if (nums[i] + nums[j] + nums[k] == 0)
            {
                dummy[0] = nums[i];
                dummy[1] = nums[j];
                dummy[2] = nums[k];
                ans.push_back(dummy);
                j++;
                k--;
                while (j < k && nums[j - 1] == nums[j])
                {
                    j++;
                }
                while (j < k && nums[k] == nums[k + 1])
                {
                    k--;
                }
            }
            else if (nums[j] + nums[k] + nums[i] > 0)
            {
                k--;
            }
            else if (nums[j] + nums[k] + nums[i] < 0)
            {
                j++;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums;

//     nums = {-1, 0, 1, 2, -1, -4};
//     for (auto i : threeSum(nums))
//     {
//         for (auto j : i)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     cout << "Fuck you" << endl;
//     nums = {0, 1, 1};
//     for (auto i : threeSum(nums))
//     {
//         for (auto j : i)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//  cout << "Fuck you" << endl;
//     nums = {0, 0, 0, 0};
//     for (auto i : threeSum(nums))
//     {
//         for (auto j : i)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     } cout << "Fuck you" << endl;
    nums = {1, 2, -2, -1};
    for (auto i : threeSum(nums))
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    } cout << "Fuck you" << endl;
}