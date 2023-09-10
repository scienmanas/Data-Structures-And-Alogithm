#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

bool isReachableAtTime(int sx, int sy, int fx, int fy, int t)
{
    int count = 0;
    int count = 0;
    int count1 = 0;
    if (sx < fx && sy < fy)
    {
        count1 = min(abs(sx - fx), abs(sy - fy));
        sx += count1;
        sy += count1;
        count += count1;
    }
    if (sx < fx && sy > fy)
    {
        count1 = min(abs(sx - fx), abs(sy - fy));
        sx += count1;
        sy -= count1;
        count += count1;
    }
    if (sx > fx && sy < fy)
    {
        count1 = min(abs(sx - fx), abs(sy - fy));
        sx -= count1;
        sy += count1;
        count += count1;
    }
    if (sx > fx && sy > fy)
    {
        count1 = min(abs(sx - fx), abs(sy - fy));
        sx -= count1;
        sy -= count1;
        count += count1;
    }
    if (sx < fx)
    {
        count += abs(sx - fx);
        sx += abs(sx - fx);
    }
    if (sx > fx)
    {
        count += abs(sx - fx);
        sx -= abs(sx - fx);
    }
    if (sy < fy)
    {
        count += abs(sy - fy);
        sy += abs(sy - fy);
    }
    if (sy > fy)
    {
        count += abs(sy - fy);
        sy -= abs(sy - fy);
    }

    if (count == 0 && t == 1)
        return false;
    else if (count <= t)
        return true;
    else
        return false;
}

int main()
{
    int sx, sy, fx, fy, t;
    sx = 2;
    sy = 4;
    fx = 7;
    fy = 7;
    t = 6;
    sx = 1;
    sy = 2;
    fx = 1;
    fy = 2;
    t = 1;
    // sx = 3;
    // sy = 1;
    // fx = 7;
    // fy = 3;
    // t = 3;
    cout << "Result: " << isReachableAtTime(sx, sy, fx, fy, t) << endl;
}
