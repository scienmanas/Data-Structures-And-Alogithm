#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool IsThereDuplicates(string &s) {
    for(int i = 0 ; i<s.length() - 1 ; i++) {
        if (s[i] == s[i + 1])
            return true;
    }
    return false;
}

int indexOf(string &s) {
    for (int i = 0 ; i<s.length() - 1; i++) {
        if (s[i] == s[i+1]) {
            return i;
        }
    }
}

void RemoveTheDuplicate(string &s , int index) {
    s.erase(index,2);
}

string removeDuplicates(string &s) {
    while(IsThereDuplicates(s)) {
        RemoveTheDuplicate(s,indexOf(s));
    }
    return s;
}

int main() {
    string s;
    // s = "abbaca";
    s = "azxxzy";
    cout<<"Result: "<<removeDuplicates(s)<<endl;
}