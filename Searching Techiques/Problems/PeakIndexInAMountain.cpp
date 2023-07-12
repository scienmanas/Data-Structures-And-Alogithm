#include <iostream>
using namespace std;

int PeakIndexInMountain(int arr[], int size)
{
    int start = 0, end = size;
    int mid = start + (end - start)/2;
    while (true) {
        if (arr[mid]>arr[mid-1] && arr[mid]>arr[mid + 1]) {
            return mid;
        }
        else if (arr[mid]>arr[mid-1] && arr[mid]<arr[mid + 1]) {
            start = mid;
        }
        else if (arr[mid]<arr[mid - 1] && arr[mid]>arr[mid + 1]) {
            end = mid;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {0, 1, 3, 5, 7, 8, 11, 9, 5, 3, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << PeakIndexInMountain(arr, size) << endl;
}