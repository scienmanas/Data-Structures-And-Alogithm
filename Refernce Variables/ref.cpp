#include <iostream>

using namespace std;

void update(int &j) {
    j++;
}

int main() {

    int b = 2;


    int &j = b;
    cout<<"Before: "<<j<<endl;
    update(j); // call to function that takes reference parameter

    cout<<"After: "<<j<<endl;

}

int& func(int a ) {
    int num = a;
    int& ans = num;
    return ans;
}