#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int>& nums, int val) {
    int s = 0;
    int i = 0;
    while (i < nums.size()) {
        if(nums[i] != val) {
            nums[s] = nums[i];
            s++;
            i++;
            continue;
        }
        i++;
    }
    return s;
}

int main() {
    vector<int> nums;
    int val;
    nums = {3,2,2,3}; val = 3;
    cout<<"Result: "<<removeElement(nums,val)<<endl;;
    nums = {0,1,2,2,3,0,4,2}; val = 2;
    cout<<"Result: "<<removeElement(nums,val);
}