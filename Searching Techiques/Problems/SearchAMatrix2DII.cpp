#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool targetRow(vector<vector<int>> &matrix, int target, int i)
{
    if (matrix[i][0] <= target && target <= matrix[i][matrix[0].size() - 1])
        return true;
    return false;
}

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        if (targetRow(matrix, target, i) == false)
        {
            continue;
        }
        int s = 0;
        int e = matrix[0].size() - 1;
        int mid = s + (e - s) / 2;
        while (s<=e) {
            if(matrix[i][mid] == target){
                return true;
            }
            else if(matrix[i][mid]>target) {
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
            mid = s + (e-s)/2;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> arr;
    arr = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
    int target = 4;
    cout << "Found: " << searchMatrix(arr, target) << endl;
    ;
}