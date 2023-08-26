#include <iostream>

using namespace std;


void print(int *p) {
    cout<<p<<endl;
}

void update(int *p) {
    // p = p + 1;
    // cout<<p<<endl;
    *p = *p + 1;
}

int main() {
    int value  = 5;
    int *p = &value;

    cout<<*p<<endl;

    print(p);
    update(p);
    print(p);

    cout<<*p<<endl;


    return 0;
}