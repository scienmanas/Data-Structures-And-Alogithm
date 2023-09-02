#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int furthestDistanceFromOrigin(string moves){ 
    int n = moves.length();
    int L_count = 0,R_count=  0,_count = 0;
    for (int i = 0 ;i <n ; i++) {
        if(moves[i] == 'L'){
            L_count++;
        }
        else if(moves[i] == 'R'){
            R_count++;
        }
        else if(moves[i] == '_') {
            _count++;
        }
    }
    return (abs(L_count-R_count) + _count);
}

int main() {
    string moves = "_R__LL_";
    cout<<"Farthest Point: "<<furthestDistanceFromOrigin(moves)<<endl;
}