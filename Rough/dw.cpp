#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct st_Content
{
    long long a;
    int b;
    char* cmt;
    int* sd;
}; cnt, *ct;


int main() {
    ct = &cnt;
    ct = st(st_Content*) malloc((sizeof(st_Content) + (sizeof(char)*100) + sizeof(int*))*100);

    cout<<sizeof(ct)<<'\t'<<sizeof(st_Content)<<'\t'<<sizeof(cnt);
}