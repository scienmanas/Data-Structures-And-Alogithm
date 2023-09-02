#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int maxSum(vector<int>& nums, int m, int k) {
    int n = nums.size();
    unordered_map<int, int> uniqueElements;
    int uniqueCount = 0;
    int maxSum = 0;
    int windowSum = 0;

    for (int i = 0; i < n; i++) {
        if (uniqueElements.find(nums[i]) == uniqueElements.end() || uniqueElements[nums[i]] == 0) {
            uniqueElements[nums[i]] = 1;
            uniqueCount++;
        }
        else {
            uniqueElements[nums[i]]++;
        }

        windowSum += nums[i];

        if (i >= k) {
            int leftElement = nums[i - k];
            uniqueElements[leftElement]--;
            if (uniqueElements[leftElement] == 0) {
                uniqueElements.erase(leftElement);
                uniqueCount--;
            }
            windowSum -= leftElement;
        }

        if (uniqueCount >= m) {
            maxSum = max(maxSum, windowSum);
        }
    }

    return maxSum;
}

int main() {
    vector<int> nums = {1, 2, 3, 2, 2, 1, 3};
    int m = 2;
    int k = 3;
    int result = maxSum(nums, m, k);
    cout << result << endl;  // Output should be 10
    return 0;
}
