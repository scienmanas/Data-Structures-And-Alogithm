#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

// bool targetIsThere(vector<int> arr, int target)
// {
//     int s = 0;
//     int e = arr.size() - 1;
//     while (s < e)
//     {
//         if ((arr[s] + arr[e]) == target)
//         {
//             return false;
//         }
//         else if ((arr[s] + arr[e]) > target)
//         {
//             e--;
//         }
//         else if ((arr[s] + arr[e]) < target)
//         {
//             s++;
//         }
//     }
//     return true;
// }



long long minimumPossibleSum(int n, int target)
{
    vector<int> arr;
    int sum = 1;
    int count = 2;
    int i = 2;
    arr.push_back(i);
    unordered_set<int> numSet = {1};
    while (count<=n)
    {
        if (numSet.find(target-i) == numSet.end()) {
            arr.push_back(i);
            numSet.insert(i);
            sum+=i;
            count++;
        }
        i++;
    }
    return sum;
}

int main()
{
    int n = 3;
    int target = 3;
    cout << "Answer is: " << minimumPossibleSum(n, target) << endl;
}

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <bits/stdc++.h>

// class Solution {
// public:
    
//     long long minimumPossibleSum(int n, int target) {
//      vector<int> check(target+1,-1);
//     long long sum=1;
//         int i=1;
//         if(target==1){
//             if(n==1)    return 1;
//         }
//         check[1]=1;
//         int cnt = n-1;
//         while((i++)<=n && (cnt--)>=0){
//             if(i>=target){
//                 while((cnt--)>0){
//                     sum+=i;
//                     i++;
//                 }
//                 return sum;
//             }   
            
//         }
//     }
// };