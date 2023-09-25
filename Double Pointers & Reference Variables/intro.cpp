#include <iostream>
#include <vector>

using namespace std;

void update(int **p2) {
    // p2 = p2 + 1;
    // No change- Copy is created

    // *p2 = *p2 + 1;
    //change will happen

    **p2 = **p2 + 1;
    // change will happen
}

int main() {
    int i = 5;
    int* p = &i;
    int** p2 = &p;

    cout<<"Sab sahi chal raha ha"<<endl;

    cout<<"Printing p: "<<p<<endl;
    cout<<"Address of P: "<<&p<<endl;

    cout<<*p2<<endl;

    cout<<"Experimenting"<<endl;

    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    cout<<&p<<endl;
    cout<<p2<<endl;

    cout<<"Testing 2"<<endl;
    cout<<"Before:"<<endl;
    cout<<i<<endl<<p<<endl<<p2<<endl;
    update(p2);
    cout<<"After: "<<endl;
    cout<<i<<endl<<p<<endl<<p2<<endl;
    
}