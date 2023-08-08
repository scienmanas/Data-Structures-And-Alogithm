#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,234,32,42,24,8743,93,34,4,64,-1};
    for (int i = 0; i<10 ; i++) {
        int leastelement = i;
        for (int j = i + 1; j < 11; j++)
        {
            if(arr[j]<arr[leastelement]) {
                leastelement = j;
            }
        }
        int temp;
        temp = arr[i];
        arr[i] = arr[leastelement];
        arr[leastelement] = temp;
    }
    for (int i = 0 ; i<11 ; i++) {
        cout<<arr[i]<<" ";
    }
}