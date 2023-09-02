#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>

using namespace std;

int isThere(int target,vector<int> array) {
    int s = 0;
    int e = array.size() - 1;
    int mid = s + (e-s)/2;
    while (s<=e) {
        if(array[mid] == target) 
            return true;
        if(array[mid] > target) {
            e = mid - 1;
        }
        else 
            s = mid + 1;
        mid = s + (e-s)/2;
    }
    return false;
}

int minimumSum(int n, int k) {
    int sum = 0;
    sum = 1;
    int i = 2;
    int count = 2;
    vector<int> a;
    a.push_back(1);

    while (count<=n) {
        if(isThere(k-i,a)==false) {
            sum += i;
            a.push_back(i);
            count++;
            // cout<<isThere(k-i,a)<<endl;
            // cout<<i<<endl<<count<<endl;
        }
        i++;
    }
    return sum;
}

int main() {
    int n = 5;
    int k = 4;
    int ans = minimumSum(n,k);
    cout<<ans<<endl;
}
