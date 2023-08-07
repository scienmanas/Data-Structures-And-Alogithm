#include <iostream>
using namespace std;
    
int main() {
    int s = 3;
    for (int up = 1 ; up<=s ; up++) {
		for (int k = up ; k<s ; k++) {
			cout<<"e";
		}
        cout << "/";
        for (int o = 1 ; o<up ; o++) {
            cout<<"o";
        }
        for (int o = 1 ; o<up ; o++) {
            cout<<"o";
        }
        cout<<"\\";
        for (int k = up; k<s; k++) {
            cout << "e";
        }
        cout << endl;
    }
	for (int down = 1 ; down<=s ; down++) {
		for (int k = 1 ; k<down ; k++) {
			cout<<"e";
		}
		cout<<"\\";
        for(int k = down ; k<s ; k++) {
            cout<<"o";
        }
        for(int k = down ; k<s ; k++) {
            cout<<"o";
        }
        cout<<"/";
		for (int k = 1 ; k<down ; k++) {
			cout<<"e";
		}
		cout<<endl;
	}
}