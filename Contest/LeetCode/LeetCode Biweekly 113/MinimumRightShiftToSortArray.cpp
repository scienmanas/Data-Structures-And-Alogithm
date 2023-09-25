#include <iostream>
#include <vector>

using namespace std;

int MinIndex(vector<int> &nums) {
    int index = 0;
    for (int i = 1 ; i<nums.size() ; i++) {
        if(nums[i]<nums[index]) {
            index = i;
        }
    }
    return index;
}

int minimumRightShifts(vector<int>& nums) {
    int index = MinIndex(nums);
    int count = 1;
    while (count < nums.size() - 1) {
        if(nums[(index + count)%nums.size()] < nums[(index + count + 1)%nums.size()]) {
        }
        else {
            return -1;
        }
        count++;
    }
    return (nums.size() - index)%nums.size();
}

int main() {
    vector<int> nums;
    nums = {2,1,4};
    cout<<"Result: "<<minimumRightShifts(nums)<<endl;
}