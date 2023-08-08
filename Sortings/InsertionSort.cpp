#include <iostream>
using namespace std;

int main() {
    int arr[] = {3,54,23,5,2,4,53};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int  i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        for (; j>=0; j--)
        {
            if (arr[j]>temp) {
                arr[j+1] = arr[j];
            }
            else {
                break;
            }
        }
        arr[j+1] = temp;
    }
}