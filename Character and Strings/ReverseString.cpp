#include <iostream>
#include <algorithm>

using namespace std;

void ReverseString(char s[]) {
    int n = 0;
    for(int i = 0 ; s[i]!='\0' ; i++) {
        n++;
    }

    int st = 0;
    int e = n-1;

    while(st<=e) {
        swap(s[st],s[e]);
        st++;
        e--;
    }

}

int main() {
    char ch[20];
    cin>>ch;

    ReverseString(ch);

    cout<<ch;

}