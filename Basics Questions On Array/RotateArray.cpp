#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Approach_1(vector<int> &nums, int k)
{
    for (int i = 1; i <= k; i++)
    {
        int temp = nums[nums.size() - 1];
        for (int j = nums.size() - 1 - 1; j >= 0; j--)
        {
            nums[j + 1] = nums[j];
        }
        nums[0] = temp;
    }
}

void Approach_2(vector<int> &nums, int k) {
    int n = nums.size();
    vector<int> final(n);
    for(int i = 0 ; i<n ;i++) {
        final[(i+k)%n] = nums[i];
    }
    nums.clear();
    nums = final;
}

int main()
{
    vector<int> nums;
    nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    // Approach_1(nums,k);
    Approach_2(nums,k);


    for (auto i : nums)
    {
        cout << i << " ";
    }
    cout << endl;
}