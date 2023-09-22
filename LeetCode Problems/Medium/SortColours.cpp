#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// void sortColors(vector<int>& nums) {
//     int zero = 0;
//     for (int i = 0 ; i<nums.size() ; i++) {
//         if (nums[i] == 0) {
//             swap(nums[i],nums[zero]);
//             zero++;
//         }
//     }
//     cout<<zero<<endl;
//     int one = zero;
//     for(int i = zero ; i<nums.size(); i++) {
//         if (nums[i] == 1) {
//             swap(nums[i],nums[one]);
//             one++;
//         }
//     }
//     cout<<one<<endl;
// }

// Dutch National Flag Approach
// The Dutch National Flag algorithm is called one-pass because it sorts the array in a single pass through the elements. The time complexity of the algorithm is O(n), where n is the size of the array.

void sortColors(vector<int> &nums)
{
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else if (nums[mid] == 2)
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> nums;
    nums = {2, 0, 2, 1, 1, 0};

    sortColors(nums);

    for (auto i : nums)
    {
        cout << i << " ";
    }
    cout << endl;
}