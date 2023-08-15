#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

int main()
{
    vector<int> a;
    int n = 2;
    a = {9, 8};

    vector<int> b;
    int m = 3;
    b = {1, 1, 4};

    deque<int> final;

    int carry = 0;
    m--;
    n--;
    for (int i = min(m, n); i >= 0; i--)
    {
        if (m < 0 || n < 0)
            break;
        int sum = a[n] + b[m] + carry;
        carry = 0;
        carry = sum / 10;
        sum = sum % 10;
        final.push_front(sum);
        m--;
        n--;
    }
    while (m >= 0)
    {
        int sum = b[m] + carry;
        carry = sum / 10;
        sum = sum % 10;
        final.push_front(sum);
        m--;
    }
    while (n>=0) {
        int sum = a[n] + carry;
        carry = sum/10;
        sum = sum%10;
        final.push_front(sum);
        n--;
    }
    if (carry != 0)
    {
        while (carry != 0)
        {
            int r = carry % 10;
            final.push_front(r);
            carry = carry / 10;
        }
    }

    for (auto i : final)
    {
        cout << i << " ";
    }
    cout << endl;
}