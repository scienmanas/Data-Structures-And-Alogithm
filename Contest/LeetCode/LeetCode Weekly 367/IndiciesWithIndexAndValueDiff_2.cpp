#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
    vector<int> ans;
    sort(nums.begin(),nums.end());
    bool b = false;
    for (int i = 0 ; i<nums.size() ; i++) {
        for (int j = i + indexDifference ; j<nums.size() ; j++) {
            if ( (abs(nums[i] - nums[j])) >= valueDifference  ) {
                ans.push_back(i);
                ans.push_back(j);
                b = true;
                break;
            }
        }
    }
    if (b == false ) {
        ans.push_back(-1);
        ans.push_back(-1);
    }
    return ans;
}

int main() {
    vector<int> nums = {5,1,4,1};
    int indexDifference = 2;
    int valueDifference = 4;
    // cout<<"Result: "<<findIndices(nums,indexDifference, valueDifference);
}