#include <iostream>
using namespace std;

int PivotElement(int arr[] , int n) {
    int s = 0;
    int e = n;
    int mid = s + (e-s)/2;
    while (s<e) {
        if (arr[mid] >= arr[0]) {
            s = mid+1;
        }
        else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int Search() {

}

int main() {
    int arr[] = {5,6,7,8,9,10,1,2,3};
    int n = sizeof(arr)/sizeof(int);
    int pivot_index = PivotElement(arr,n);

    return 0;
}