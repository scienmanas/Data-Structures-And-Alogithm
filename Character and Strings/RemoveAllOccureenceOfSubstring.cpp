#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

string RemoveOccurrences(string &s, string part) {
    while (s.length()!=0 && s.find(part)<s.length()) {
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main() {
    string s = "daabcbaabcbc";
    string part = "dab";
    RemoveOccurrences(s, part);
}