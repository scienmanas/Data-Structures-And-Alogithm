#include <iostream>
using namespace std;

int main()
{
    int s = 2;
    int c = 2;
    int r = 2;
    for (int row = 1; row <= r; row++)
    {
        for (int up = 1; up <= s; up++)
        {
            for (int column = 1; column <= c; column++)
            {
                for (int k = up; k < s; k++)
                {
                    cout << "e";
                }
                cout << "/";
                for (int o = 1; o < up; o++)
                {
                    cout << "o";
                }
                for (int o = 1; o < up; o++)
                {
                    cout << "o";
                }
                cout << "\\";
                for (int k = up; k < s; k++)
                {
                    cout << "e";
                }
            }
            cout << endl;
        }
        for (int down = 1; down <= s; down++)
        {
            for (int column = 1; column <= c; column++)
            {
                for (int k = 1; k < down; k++)
                {
                    cout << "e";
                }
                cout << "\\";
                for (int k = down; k < s; k++)
                {
                    cout << "o";
                }
                for (int k = down; k < s; k++)
                {
                    cout << "o";
                }
                cout << "/";
                for (int k = 1; k < down; k++)
                {
                    cout << "e";
                }
            }
            cout << endl;
        }
    }
}