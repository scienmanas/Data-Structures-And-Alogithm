#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int i = 0;
    // vector<int> dummy(4);
    vector<vector<int>> final;
    if(nums.size() < 4) {
        return final;
    }
    while (i < nums.size() - 3)
    {
        // cout << "Lawde -1 " << endl;
        int j = i + 1;
        while (j < nums.size() - 2)
        {
            // cout << "Lawde 2" << endl;
            int k = j + 1;
            int l = nums.size() - 1;
            while (k < l)
            {
                while (nums[l] == nums[l - 1] && l > k)
                {
                    l--;
                }
                // cout << "Lawde 3" << endl;
                while (nums[k] == nums[k + 1] && k < l)
                {
                    k++;
                }

                if ((nums[i] + nums[j] + nums[k] + nums[l]) == target)
                {
                    final.push_back({nums[i], nums[j], nums[k], nums[l]});
                    k++;
                    l--;
                }
                else if ((nums[i] + nums[j] + nums[k] + nums[l]) > target)
                {
                    l--;
                }
                else
                {
                    k++;
                }
            }
            while (nums[j] == nums[j + 1] && j + 1 < nums.size() - 2)
            {
                j++;
            }
            j++;
        }
        while (nums[i] == nums[i + 1] && i + 1 < nums.size() - 3)
        {
            i++;
        }
        i++;
    }
    return final;
}

int main()
{
    vector<int> nums;
    int target;

    // nums = {1, 0, -1, 0, -2, 2};
    // target = 0;

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