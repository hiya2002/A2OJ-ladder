#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<queue>
#include<math.h>
#include<stdlib.h>
#include<deque>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int l0=0,l1=0,r0=0,r1=0;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin>>a>>b;
        if(a==0)
        {
            l0++;
        }
        else
        {
            l1++;
        }
        if(b==0)
        {
            r0++;
        }
        else
        {
            r1++;
        }
    }
    int ans=min(l0,l1)+min(r0,r1);
    cout<<ans;
    return 0;
}