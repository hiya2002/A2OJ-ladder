#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <queue>
#include <math.h>
#include <stdlib.h>
#include <deque>
#include <numeric>
using namespace std;
int main()
{
    int k, l, m, n, d, count = 0;
    cin >> k >> l >> m >> n >> d;
    if (k == 1 || l == 1 || m == 1 || n == 1)
    {
        cout << d;
    }
    else
    {
        for (int i = 1; i <= d; i++)
        {
            if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            {
                count++;
            }
        }
        cout << count;
    }
    return 0;
}