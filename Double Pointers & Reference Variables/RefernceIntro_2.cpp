#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int& func(int a) {
    int num = a;      // num mar jaega
    int& ans = num;   // Bad Practice
    return ans;
}   

int* fun(int n) {
    int* ptr = &n;
    return ptr;      // Bad Practice
}

void update2(int& n) {
    n++;
}

void update(int n) {
    n++;
}


int main() {
    int n = 5;

    cout<<"Before: "<<n<<endl;
    // update(n);
    func(n);
    update2(n);
    cout<<"After: "<<n<<endl;

}