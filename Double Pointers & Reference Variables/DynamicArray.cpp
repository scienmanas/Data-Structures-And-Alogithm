#include <iostream>

using namespace std;
 
int getsum(int* arr , int n) {
    int sum = 0;
    for (int i = 0 ; i<n ; i++) {
        sum+=*(arr + i);
    }
    return sum;
}

int main() {
    int* arr1 = new int[5]; // Creating array in heap memory


    int n;
    cin>> n;
    int *arr = new int[n];
    for (int i = 0 ; i<n ; i++) {
        cin>> *(arr+i);
    }

    int ans = getsum(arr,n);

    // delete i;
    delete []arr;

    cout<<"Result: "<<ans;
}