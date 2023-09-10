#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxElement(vector<int> nums, int index)
{
    int ind = 0;
    for (int i = index + 1; i < nums.size(); i++)
    {
        if (nums[ind] < nums[i])
        {
            ind = i;
        }
    }
    return ind;
}

void nextPermutation(vector<int> &nums)
{
    // last sae shuru karna ha
    int index = -1;

    for (int i = nums.size() - 1; i >= 1; i--)
    {
        if (nums[i] > nums[i - 1])
        {
            index = i - 1;
            break;
        }
    }
    if (index == -1)
    {
        // cout<<"Lawde Lag gae"<<endl;
        sort(nums.begin(), nums.end());
    }
    else
    {
        int min_element_index = maxElement(nums, index);
        // cout<<nums[min_element_index]<<endl;
        for (int i = index + 1; i < nums.size(); i++)
        {
            if (nums[i] < nums[min_element_index] && nums[i] > nums[index])
            {
                min_element_index = i;
            }
        }
        swap(nums[index], nums[min_element_index]);
        int left = index + 1;
        int right = nums.size() - 1;
        while (left < right)
        {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }
}

int main()
{
    vector<int> nums;
    nums = {1, 2, 3};
    nextPermutation(nums);
    for (auto i : nums)
    {
        cout << i << " "; // Output: [1,3,2]
    }
    cout << endl;
    nums = {3, 2, 1};
    nextPermutation(nums);
    for (auto i : nums)
    {
        cout << i << " "; // Output: [1,2,3]
    }
    cout << endl;
    nums = {1, 1, 5};
    nextPermutation(nums);
    for (auto i : nums)
    {
        cout << i << " "; // [1,5,1]
    }
    cout << endl;
}