#include <iostream>
#include <string>
#include <vector>

using namespace std;

void ReverseTheWord(string &word) {
    int s = 0;
    int e = word.length() - 1;
    while (s<=e) {
        swap(word[s++],word[e--]);
    }
}

void GiveReversedString(vector<string> &words) {
    string word;
    for (int i = 0 ; i<words.size() ; i++) {
        word = words[i];
        ReverseTheWord(word);
        words[i] = word;
    }
}

int main() {
    string sentence = "I am Manas Poddar";
    vector<string> words;
    int n = sentence.length();
    char delimeter = ' ';
    string rough = "";
    for (int i = 0; i <n ; i++) {
        if(sentence[i] != ' '){
            rough += sentence[i];
        }
        else {
            words.push_back(rough);
            rough = "";
        }
    }
    if(!rough.empty()) {
        words.push_back(rough);
    }

    // for (int i = 0 ; i < words.size() ; i++) {
    //     cout<<words[i]<<endl;
    // }
    // cout<<endl;

    GiveReversedString(words);
    sentence = "";
    // cout<<"Word Size: "<<words.size()<<endl;
    for (int i = 0; i<words.size() ; i++) {
        sentence += words[i] + " ";
    }
    sentence.pop_back();
    // sentence[sentence.length() - 1] = '\0';
    cout<<sentence<<endl;
}