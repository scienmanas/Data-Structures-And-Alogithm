#include <iostream>

using namespace std;

int main() {
    char name[20];

    cout<<"Enter your name"<<endl;
    cin>>name;  // Terminator -> Tab, Space, Nreline, Enter

    cout<<"Your name is: ";
    cout<<name<<endl;

    return 0;
}