#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

// Euclid Algorithm

int gcd(int a, int b){
    if (a==0) 
        return b;
    else if (b==0) 
        return a;

    while(a!=b) {
        if (a>b) 
            a = a - b;
        else 
            b = b - a;
    }
    return a;
}

int main() {
    int a = 4;
    int b = 8;
    cout<<"GCD of "<<a<<" "<<b<<" "<<"is: "<<gcd(a,b)<<endl;;
}