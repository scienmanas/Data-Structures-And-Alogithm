#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void rotate_array(vector<vector<int>> &compare, char shift_dir, int row)
{
    if (shift_dir == 'r')
    {
        for (int i = compare[row].size() - 1; i >= 1; i--)
        {
            swap(compare[row][i], compare[row][i - 1]);
        }
    }
    else
    {
        for (int i = 0; i < compare[row].size() - 1; i++)
        {
            swap(compare[row][i], compare[row][i + 1]);
        }
    }
}

bool areSimilar(vector<vector<int>> &mat, int k)
{
    vector<vector<int>> compare = mat; // Copy mat to compare
    for (int i = 0; i < compare.size(); i++)
    {
        if (i % 2 == 0)
        {
            for (int m = 1; m <= k; m++)
            {
                rotate_array(compare, 'l', i);
            }

            if (mat[i] != compare[i])
            {
                return false;
            }
        }
        else
        {
            for (int l = 0; l < compare[i].size(); l++)
            {
                for (int m = 1; m <= k; m++)
                {
                    rotate_array(compare, 'r', i);
                }
            }

            if (mat[i] != compare[i])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    vector<vector<int>> mat(
        {{1, 2}});
    cout << "Result: " << areSimilar(mat, 2);
    return 0;
}
