#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool searchMatrix(vector<vector<int>> arr, int target) {
    int s = 0;
    int e = arr.size()*arr[0].size() - 1;
    int mid  = s + (e-s)/2 ;
    while (s<=e) {
        if (arr[mid/arr[0].size()][mid%arr[0].size()] == target) {
            return true;
        }
        else if(arr[mid/arr[0].size()][mid%arr[0].size()] > target){
            e = mid - 1;
        }
        else {
            s= mid+1;;
        }
        mid = s + (e-s)/2;
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix;
    matrix = {{1, 3, 5, 6},
              {10, 11, 16, 20},
              {23, 30, 34, 60}};
    int target = 3416;
    cout << "Element is there or not: " << searchMatrix(matrix, target);
    cout << endl;
}