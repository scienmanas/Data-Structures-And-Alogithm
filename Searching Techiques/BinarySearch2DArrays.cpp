#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int targetRow(vector<vector<int>> &matrix, int target) {
    int row_loc = -1;
    for (int i = 0 ; i<matrix.size() ; i++) {
        if (matrix[i][0]<=target && target<=matrix[i][matrix[0].size() - 1]){
            row_loc = i;
        }
    }
    return row_loc;
}

bool searchMatrix(vector<vector<int>>& matrix, int target){
    int row = targetRow(matrix,target);
    if (row == -1) {
        return false;
    }
    
    // Apply binary Search
    int s = 0;
    int e = matrix[0].size() - 1;
    int mid = s + (e-s)/2;

    while(s<=e) {
        if (matrix[row][mid] == target) {
            return true;
        }
        if(matrix[row][mid]<target) {
            s = mid + 1;
        }
        else if (matrix[row][mid]> target) {
            e = mid - 1;
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
    int target = 1;
    cout<<"Element is there or not: "<<searchMatrix(matrix,target);
    cout<<endl;
}