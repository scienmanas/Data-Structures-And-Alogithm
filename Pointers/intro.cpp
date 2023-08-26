#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num = 5;

    cout<<num<<endl;

    cout<<"Address of num is: "<<&num;

    int *ptr = &num;
    cout<<"Address is: "<<ptr<<endl;
    cout<<"Value is: "<<*ptr<<endl;
    
    cout<<"Size of integer: "<<sizeof(num)<<endl;
    cout<<"Size of pointer pointing: "<<sizeof(ptr)<<endl;

    double s = 878.987;
    double *s_ = &s;

    cout<<"Size of double: "<<sizeof(s)<<endl;
    cout<<"Size of the double pointer pointing is: "<<sizeof(s_)<<endl;

    // coping ann pointer

    double *q = s_;

    int i = 3;
    int *t = &i;

    cout<<*t<<endl;
    cout<<"Before t: "<<t<<endl;

    t = t + 1;
    
    cout<<"After t: "<<t<<endl;
    cout<<"After t: "<<*t<<endl; // Absured garbage value
    

    int a[20] = {1,2,3,5};
    cout<<"Printing Values: "<<&a[0];
    cout<<endl;

    int *p = &a[0];
    cout<<"Printing values: "<<&p<<endl;

    // Symbol table content cannot be changed

    int arr[10];

    // arr = arr + 1       fill give the error

    int *pefe = &arr[0];
    cout<<pefe<<endl;

    pefe = pefe + 1;
    cout<<pefe<<endl;

}