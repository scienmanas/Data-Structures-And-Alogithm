#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

vector<int> SegmentedSieve(int n) {
    long long sq = sqrt(n);
    
}

int main() {
    int n = 5364;
    vector<int> ans;
    ans = SegmentedSieve(n);
    for (auto i:ans) {
        cout<<i<<" ";
    }
    cout<<endl;
}