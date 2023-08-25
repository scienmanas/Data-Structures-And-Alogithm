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

}