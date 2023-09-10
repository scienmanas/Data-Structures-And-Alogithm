#include <iostream>
#include <vector>
#include <set>

using namespace std;

int numberOfPoints(vector<vector<int>> &nums)
{
    set<int> data;   
    for (int i = 0; i < nums.size(); i++)
    {
        for (int m = nums[i][0]; m <= nums[i][1] ; m++) {
            data.insert(m);
        }
    }
    return data.size();
}

int main()
{
    vector<vector<int>> nums;
    // nums = {
    //     {3,6},
    //     {1,5},
    //     {4,7}
    // };
    nums = {
        {1,3},
        {5,8}
    };

    cout << "Number of points: "<<numberOfPoints(nums)<<endl;;
}