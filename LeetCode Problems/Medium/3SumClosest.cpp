#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int threeSumClosest(vector<int> &nums, int target)
{
    sort(nums.begin(),nums.end());
    int i = 0;
    int ans;
    int min_diff = INT_MAX;
    while (i<nums.size()-2) {
        int j = i + 1;
        int k = nums.size() - 1;
        while (j<k)
        {
            int current_sum = nums[i] + nums[j] + nums[k];
            int current_diff = abs(target - current_sum);
            if (current_diff == 0) {
                return current_sum;
            }
            if (current_diff < min_diff) {
                min_diff = current_diff;
                ans = current_sum;
            }
            if(current_sum > target){
                k--;
            }
            else if(current_sum < target) {
                j++;
            }
        }
        i++;
    }
    return ans;
}

int main()
{
    vector<int> nums;
    int target;
    nums = {-1,2,1,-4}; target = 1;
    // nums = {0,0,0}; target = 1;
    cout<<"Result: "<<threeSumClosest(nums,target)<<endl;

}
