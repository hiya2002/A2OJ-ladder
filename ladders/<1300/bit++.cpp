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
using namespace std;

int main()
{
    int n,ans=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        if(s[1]=='+')
        {
            ans++;
        }
        else
        {
            ans--;
        }
    }
    cout<<ans;
    return 0;
}