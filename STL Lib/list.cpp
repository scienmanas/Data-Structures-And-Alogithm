#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);

    for(int i:l) {
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());
    cout<<"After Earse"<<endl;
    for(int i:l) {
        cout<<i<<" ";
    }
    cout<<endl;

    // Can also perform pop and push size

    list<int> n(5,100);
    list<int> n2(l);

    for (int i:n) {
        cout<<i<<" ";
    }
    cout<<endl;

    for(int i:n2) {
        cout<<i<<" ";
    }
    cout<<endl;

}