#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void reverseArrayauto(vector<int> &arr, int m){
    reverse(arr.begin()+m+1, arr.end());
}

void reverseArraymanual(vector<int> &arr, int m) {
    int s = m+1;
    int e = arr.size()-1;
    while(s<e) {
        swap(arr[e],arr[s]);
        e--;
        s++;
    }
}

int main() {
    vector<int> arr;
    arr = {1,2,3,4,5,6};
    int m = 3;
    reverseArraymanual(arr,m);
    for(auto i:arr) {
        cout<<i<<" ";
    }
    cout<<endl;
}