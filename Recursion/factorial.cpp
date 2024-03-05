#include <iostream>

using namespace std;

int factorial(int n) {
    // base case:
    if( n == 0) 
        return 1;

    return (factorial(n-1)*n);
}


int main() {

    cout<<factorial(5)<<endl;

}