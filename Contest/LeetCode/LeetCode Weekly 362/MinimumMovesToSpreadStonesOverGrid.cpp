#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minimumMoves(vector<vector<int>>& grid) {
    
}

int main() {
    vector<vector<int>> grid;
    grid = {
        {1,1,0},
        {1,1,1},
        {1,2,1}
    };
    // grid = {
    //     {1,3,0},
    //     {1,0,0},
    //     {1,0,3}
    // };
    cout<<"Result: "<<minimumMoves(grid);
}