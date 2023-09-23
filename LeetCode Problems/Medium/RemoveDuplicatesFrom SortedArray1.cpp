#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

int removeDuplicates(vector<int>& nums) {
   int i = 0;
   for (auto ele : nums) {
    if(i==0 || i==1 || nums[i-2]!=ele) {
        nums[i] = ele;
        i++;
    }
   }
   return i;
}

int main() {
    vector<int> nums;
    nums = {0,0,1,1,1,1,2,3,3};
    cout<<"Result: "<<removeDuplicates(nums)<<endl;
}