#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int,string> m;

    m[1] = "babbar";
    m[2] = "love";
    m[13] = "kumar";

    m.insert({5,"bheem"});

    cout<<"Before Erase: "<<endl;
    for(auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    cout<<"Finding 13: "<<m.count(13)<<endl;

    m.erase(13);
    cout<<"After Erase: "<<endl;

    for(auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    // Time complexity-> O(LogN)

    auto it = m.find(5);

    for(auto i = it ; i!=m.end(); i++) {
        cout<<(*i).first<<endl;
    }
}