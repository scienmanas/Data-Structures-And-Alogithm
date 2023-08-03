#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Firstdigit(int n) {
    int s= 1,e=n;
    long long int mid = s + (e-s)/2;
    long long int ans = -1;
    while (s<=e)
    {
        long long int square = mid*mid;
        if (square==n) 
            return mid;
        else if (square<n) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return min(s,e);
}

double Squareroot(int n, int precesion) {
    double final_result = (double) Firstdigit(n);
    double factor = 1;
    for (int i = 1 ; i<=precesion ; i++) {
        factor = factor/10;
        for (double j=final_result; j*j<=n; j+=factor)
        {
            final_result = j;
        }
    }
    return final_result;
}


int main(){
    int n = 99;
    int precesion = 3;
    cout<<Squareroot(n,precesion);
}