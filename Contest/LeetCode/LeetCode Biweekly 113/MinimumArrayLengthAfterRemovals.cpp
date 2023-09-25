#include <iostream>
#include <vector> 

using namespace std;

int minLengthAfterRemovals(vector<int>& nums) {
    int i = 0;
    int j = i + 1;
    int n = nums.size();
    while (j < nums.size() && i<j) {
        if (nums[i] < nums[j] && i<j) {
            nums[j] = -1;
            
            j++;
        }
    }
}

int main() {
    vector<int> nums;
    nums = {1,1,2};
    cout<<"Result: "<<minLengthAfterRemovals(nums)<<endl;
}