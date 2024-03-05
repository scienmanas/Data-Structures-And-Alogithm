#include <iostream>

using namespace std;


int power(int a, int n) {
    if (n==0) {
        return 1;
    }
    return a*power(a,n-1);
}


int main() {

    cout <<power(2,3)<<endl; //8
    cout <<power(5,-1)<<endl; //1/5
    
}

