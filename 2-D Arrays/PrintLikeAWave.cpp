#include <iostream>
#include <vector>

using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans_to_re;
    // int counter = 1;
    // no need of counter
    for (int i = 0; i < mCols; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < nRows; j++)
            {
                ans_to_re.push_back(arr[j][i]);
            }
        }
        else
        {
            for (int j = nRows - 1; j >= 0; j--)
            {
                ans_to_re.push_back(arr[j][i]);
            }
        }
    }
    return ans_to_re;
}

    int main()
    {
        vector<vector<int>> arr;
        arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
        int nRows = 3, mCols = 4;
        vector<int> ans(nRows*mCols);
        ans = wavePrint(arr, nRows, mCols);
        for (int i = 0; i < nRows * mCols; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }