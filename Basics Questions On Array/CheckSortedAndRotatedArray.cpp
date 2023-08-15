#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums;
    nums = {6,10,6};

    int n = nums.size();

    int min_index = 0;
    // for(int i = 1 ; i<n ; i++) {
    //     if(nums[min_index]>=nums[i]){
    //         if(i>0 && nums[i]<nums[i-1]){
    //             min_index = i;
    //             continue;
    //         }
    //     }
    // }

    // Pivot Element  :

    

    for (int i = 0; i < n - 1; i++)
    {
        if (nums[(i + min_index) % n] <= nums[(i + min_index + 1) % n])
        {
            continue;
        }
        else
        {
            cout << "False" << endl;
            break;
        }
    }
    cout << "YEs" << endl;
}
