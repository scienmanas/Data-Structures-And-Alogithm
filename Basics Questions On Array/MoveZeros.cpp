#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums;
    nums = {0,1,0,3,12};
    int n = nums.size();
    for(int i = 0 ; i<n;i++) {
        for(int j = 0 ; j< n - i - 1; j++) {
            if(nums[j]==0) {
                swap(nums[j],nums[j+1]);
            }
        }
    }

// Alternative approach

// int n = nums.size();
//         int s = 0;
//         for(int i = 0 ; i<n ; i++ ){
//             if(nums[i]!=0) {
//                 swap(nums[i],nums[s]);
//                 s++;
//             }
//         }


    for(int i = 0 ; i<n ; i++) {
        cout<<nums[i]<< " ";
    }
    cout<<endl;
}