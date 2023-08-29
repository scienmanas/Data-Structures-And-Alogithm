#include <iostream>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int missingNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int i;
    for (i = 0 ; i<nums.size() ; i++) {
        if (i != nums[i]) {
            return i;
        }
    }
    return i;
}

int main() {
    vector<int> nums = {3,0,1};
    cout<<missingNumber(nums);
}