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
    int n,maxi=0,mini=INT_MAX,min_in,max_in;
    cin>>n;
    int *a=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]>maxi)
        {
            maxi=a[i];
            max_in=i;
        }
        if(a[i]<=mini)
        {
            mini=a[i];
            min_in=i;
        }
    }
    int dis;
    if(max_in<min_in)
    {
        dis=max_in+(n-min_in-1);
        cout<<dis;
    }
    else
    {
        dis=max_in+(n-min_in-1)-1;
        cout<<dis;
    }
    return 0;
}