#include <iostream>
#include <vector>

using namespace std;

vector<int> lastVisitedIntegers(vector<string> &words)
{
    vector<int> finalarr;
    int count = 0;
    for (int i = 0; i < words.size(); i++)
    {
        if (words[i] == "prev") {
            count++;
            if (count > 1) {
                if (finalarr.size() >= 1) {
                    finalarr.pop_back();
                }
                else {
                    finalarr.push_back(-1);
                }
            }
        }
        else {
            count = 0;
        }
    }
    return finalarr[finalarr.size() - 1];
}

int main()
{
}