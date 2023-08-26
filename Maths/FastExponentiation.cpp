#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int modularExponentiation(int x, int n, int m) {
    int res = 1;

    while(n>0) {
        if(n&1) {
            // odd
            res = res * x;
        }
        x = x*x;
        n = n>>1;
    }
    return res;
}

int main() {
    int number = 3;
    int power = 34;
    int mod_value = 7;
    cout<<"The value is: "<<modularExponentiation(number,power,mod_value)<<endl;;
} 