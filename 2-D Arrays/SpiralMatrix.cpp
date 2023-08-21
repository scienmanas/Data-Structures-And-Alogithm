#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int Row = matrix.size();
    int Column = matrix[0].size();

    int count = 0;
    int total = Row * Column;

    // index Initation
    int startingRow = 0;
    int startingcol = 0;
    int endingRow = Row - 1;
    int endingColumn = Column - 1;

    while (count < total)
    {
        // Print starting row
        for (int i = startingcol; i <= endingColumn; i++)
        {
            if (count >= total)
            {
                break;
            }
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;

        // Printing ending column :
        for (int i = startingRow; i <= endingRow; i++)
        {
            if (count >= total)
            {
                break;
            }
            ans.push_back(matrix[i][endingColumn]);
            count++;
        }
        endingColumn--;

        // printing last column
        for (int i = endingColumn; i >= startingcol; i--)
        {
            if (count >= total)
            {
                break;
            }
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;

        // Printing starting Column
        for (int i = endingRow; i >= startingRow; i--)
        {
            if (count >= total)
            {
                break;
            }
            ans.push_back(matrix[i][startingcol]);
            count++;
        }
        startingcol++;
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    // cout<<"Size: "<<matrix.size();
    // cout<<"Size 2: "<<matrix[0].size();
    // vector<vector<int>> matrix = {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };
    vector<int> ans1(matrix.size() * matrix[0].size());
    ans1 = spiralOrder(matrix);
    for (auto i : ans1)
    {
        cout << i << " ";
    }
    cout << endl;
}
