#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string> q;

    q.push("Manas");
    q.push("Poddar");
    q.push("Science");

    cout << "First Element: " << q.front() << endl;

    q.pop();
    cout<<"First Element: "<< q.front() << endl;
    
    cout<<"Size after pop: "<<q.size()<<endl;

    // Time comolexity O(1)
}