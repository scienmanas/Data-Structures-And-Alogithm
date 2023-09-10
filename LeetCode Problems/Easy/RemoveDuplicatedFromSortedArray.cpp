#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int s = 0;
    int i = 1;
    while (i<nums.size()) {
        if (nums[i-1] != nums[i]){
            s++;
            nums[s] = nums[i];
            i++;
            continue;
        }
        i++;
    }
    return s+1;
}

int main() {
    vector<int> nums;
    // nums = {1,1,2};
    nums = {0,0,1,1,1,2,2,3,3,4};
    cout<<"Result: "<<removeDuplicates(nums);
}