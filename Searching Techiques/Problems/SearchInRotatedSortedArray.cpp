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

int BinarySearch(int arr[],int s,int e, int key) {
    int mid = s + (e-s)/2;
    while (s<=e)
    {
        if (key==arr[mid])
        {
            return mid;
        }
        else if (key>arr[mid]) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int SearchTheElement(int arr[], int n, int pivotindex, int key) {
    if (key<=arr[n-1] && key>=arr[pivotindex]) {
        return BinarySearch(arr,pivotindex,n-1,key);
    }
    else {
        return BinarySearch(arr,0,pivotindex - 1, key);
    }
}

int main() {
    int arr[] = {5,6,7,8,9,10,1,2,3};
    int n = sizeof(arr)/sizeof(int);
    int pivot_index = PivotElement(arr,n);
    cout<<pivot_index<<endl;
    int key = 17;
    cout<<SearchTheElement(arr,n,pivot_index,key);
    return 0;
}