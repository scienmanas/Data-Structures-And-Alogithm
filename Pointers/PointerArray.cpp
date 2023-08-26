#include <iostream>

using namespace std;

int main() {
    int arr[10] = {2,5,6};
    
    cout<<"Address of first memory block is: "<<arr<<endl;
    
    cout<<"Address of first memory block is: "<<&arr[0]<<endl;

    cout<<"Printing Value: "<<*arr<<endl;
    cout<<"Printing Value: "<<*arr + 1<<endl;
    cout<<"Printing Value: "<<*(arr+1)<<endl;
    cout<<"Printing Value: "<<*(arr) + 1<<endl;

    int i = 2;

    cout<<"Printing Value: "<<i[arr]<<endl;

    int temp[10];
    cout<<sizeof(temp)<<endl;
    cout<<sizeof(*temp)<<endl;
    cout<<sizeof(temp[0])<<endl;
    cout<<sizeof(&temp[0])<<endl;
    cout<<sizeof(&temp)<<endl;

}