// Dynamic Array

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;

    cout<<"Before Pop"<<endl;
    for(int i:v) {
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();

    cout<<"After pop and before clearing"<<endl;

    for(int i:v) {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size Before clearing: "<<v.size()<<endl;;
    cout<<"Capacity before clearing: "<<v.capacity()<<endl;
    v.clear();
    cout<<"Size After Clearing: "<<v.size()<<endl;
    cout<<"Capacity After Clearing: "<<v.capacity()<<endl;

    vector<int> a(5,1);
    for(int i:a ) {
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> last(a);
    for(int i:last) {
        cout<<i<<" ";
    }
    cout<<endl;

}