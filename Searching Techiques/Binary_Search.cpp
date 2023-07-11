#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] > key) {
            end = mid - 1;      
        }
        else {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main () {
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[7] = {1, 3, 5, 7, 9, 11, 13};

    cout << BinarySearch(even, 6, 12) << endl;
    cout << BinarySearch(odd, 7, 43) << endl;
    return 0;
}