#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums1;
    nums1 = {1, 2, 3, 0, 0, 0};

    vector<int> nums2;
    vector<int> f;
    nums2 = {2, 5, 6};

    int m = 3;
    int n = 3;

    int second = 0;
    int fir = 0;

    for (int i = 0; i < m + n;) {
        if(nums1[fir] == 0) {
            for(int j = i ; j<m+n; j++) {
                f.push_back(nums2[second]);
                second++;
            }
            break;
        }
        if (second>=n) {
            for(int j = i ; j<m+n ; j++){
                f.push_back(nums1[fir]);
                fir++;
            }
            break;
        }
        if (nums1[fir] > nums2[second] )
        {
            f.push_back(nums2[second]);
            second++;
            i++;
            continue;
        }
        else if (nums1[fir]<=nums2[second] ) {
            f.push_back(nums1[fir]);
            fir++;
            i++;
            continue;
        }
    }



    for(int i = 0; i<m+n; i++) {
        cout<<f[i]<<" ";
    }
    cout<<endl;

}