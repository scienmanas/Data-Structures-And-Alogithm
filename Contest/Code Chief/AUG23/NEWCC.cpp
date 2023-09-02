#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



 int main() {
    int X,Y;
    cin>>X>>Y;
    if(X==Y)
        cout<<"Same"<<endl;
    else if(X>Y) 
        cout<<"New"<<endl;
    else 
        cout<<"Old"<<endl;
 }