#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void SimpleSieve(int limit, vector<int> &prime) {
    vector<bool> mark(limit + 1 , true);

    for (int p = 2 ; p)
}

void SegmentedSieve(int n) {
    // Compute all the primes smaller tham or equal to square root of n using simple sieve

    int limit = floor()
}

int main() {
    int  n = 100;
    cout<<"Prime numbers smaller than "<<n<<" : ";
    SegmentedSieve(n);
    return 0;
}