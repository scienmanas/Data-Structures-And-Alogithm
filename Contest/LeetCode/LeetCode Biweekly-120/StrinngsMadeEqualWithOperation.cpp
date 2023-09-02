#include <iostream>
#include <vector>

using namespace std;

bool canBeEqual(string s1, string s2)
{
    if (s1 == s2) {
        return true;
    }
    else
    {
        swap(s1[0],s1[2]);
        if(s1 == s2) {
            return true;
        }
        else {
            swap(s1[0],s1[2]);
            swap(s1[1],s1[3]);
            if(s1 == s2) {
                return true;
            }
            else {
                swap(s1[0],s1[2]);        
                if (s1 == s2) {
                    return true;
                }    
                else {
                    return false;
                }
            }
        }
    }
}

int main()
{
    string s1 = "abcd";
    string s2 = "cdab";
    cout<<"Result is: "<<canBeEqual(s1,s2)<<endl;
}