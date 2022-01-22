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
        int a,b,c,o=0;
        cin>>a>>b>>c;
        if(a==1)
        {
            o++;
        }
        if(b==1)
        {
            o++;
        }
        if(c==1)
        {
            o++;
        }
        if(o>=2)
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}