#include <iostream>
using namespace std;

int FirstOcuurence(int arr[], int n, int key) {
    int s = 0, e = n-1;
    int mid = s +(e-s)/2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
               e = mid - 1; 
        }
        mid = s +(e-s)/2;
    }
    return ans ;
}

int SecondOccurence(int arr[], int n, int key) {
    int s = 0, e = n-1;
    int mid = s +(e-s)/2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key) {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
             e = mid - 1;   
        }
        mid = s +(e-s)/2;
    }
    return ans;
}

int main () {
    int arr[10] = {1, 2, 3, 3, 3, 3, 3, 3, 8, 9};
    int size = 10;
    cout << FirstOcuurence(arr, size, 3) << endl;
    cout << SecondOccurence(arr, size, 3) << endl;
}