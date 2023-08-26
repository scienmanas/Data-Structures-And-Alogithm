#include <iostream>
#include <vector>

using namespace std;

// The modular multiplicative inverse of a function a is (a*x)%m = 1
// Now, a and m should be coprime, i.e., HCF/GCD = 1 or they have no common divisor except 1


int optimized(int a, int m) {
    
}

int brutefoce(int a, int m) {         
    for(int i = 1; i<=m-1 ; i++) {
        if((a*i)%m == 1) {
            return i;
        }
    }
    return -1;
}

// Time Complexity - O(m)
//Space Complexity - O(1)

int main() {
    int a = 10;
    int m = 499;
    cout << "Brute force: " << endl;
    cout << brutefoce(a,m)<< endl;
}