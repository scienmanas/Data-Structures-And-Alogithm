#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(6);
    s.insert(0);

    // Time complexity -> O(logN)

    cout<<"End karo"<<endl;

    for (auto i : s)
    {
        cout << i <<" ";
    }
    cout<<endl;

    // s.erase(s.begin());

    set<int>::iterator it = s.begin();
    it++;
    
    s.erase(it);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout<<endl;

    cout<<"Count: "<<s.count(5)<<endl;
    cout<<"Count: "<<s.count(-5)<<endl;

    set<int>::iterator itr = s.find(5);

    for(auto it = itr ; it!=s.end();it++) {
        cout<<*it<<" ";
    }
    cout<<endl;

    // Insert, find, erase, count -> O(LogN)
    // Size, begin, empty, end -> O(Log1)


}