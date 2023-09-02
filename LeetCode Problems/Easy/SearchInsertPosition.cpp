#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int>& nums, int target){
    int s = 0;
    int e = nums.size() - 1;
    int mid = s + (e-s)/2;
    while (s<=e)
    {
        if(nums[mid] == target) {
            return mid;
        }
        else if(nums[mid] > target) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return max(s,e);
}

int main() {
    vector<int> nums;
    nums = {1,3,5,7};
    cout<<searchInsert(nums , 6)<<endl;;
}