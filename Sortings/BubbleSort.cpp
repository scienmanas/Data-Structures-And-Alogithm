#include <iostream>
using namespace std;

int main() {
    int arr[] = {7,34,2324,292,9,72,97,2,0,23};
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i = 1; i<len ; i++) {
        for(int j = 0 ; j<len -i; j++) {
            if (arr[j]>arr[j+1]) {
                int temp;
                temp = arr[j] ;
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i = 0 ; i<len ; i++) {
        cout<<arr[i]<<" ";
    }
}