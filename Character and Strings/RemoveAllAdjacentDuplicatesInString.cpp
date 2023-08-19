#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool IsThereDuplicates(string &s) {
    cout<<"cAlled :"<<s.length()<<endl;
    for(int i = 0 ; i<s.length()-1 ; i++) {
        if (s[i] == s[i + 1]){
            cout<<"Gaya tata"<<endl;
            return true;
        }
    }
    return false;
}

int indexOf(string &s) {
    for (int i = 0 ; i<s.length() - 1; i++) {
        if (s[i] == s[i+1]) {
            return i;
        }
    }
    return -1;
}

void RemoveTheDuplicate(string &s , int index) {
    s.erase(index,2);
}

string removeDuplicates(string &s) {
    while(IsThereDuplicates(s) == true) {
        RemoveTheDuplicate(s,indexOf(s));
        cout<<s<<endl;
    }
    return s;
}

int main() {
    string s;
    // s = "abbaca";
    // s = "azxxzy";
    s = "aaaaaaaa";
    cout<<"Result: "<<removeDuplicates(s)<<endl;
}