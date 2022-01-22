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
    int*a=new int[n];
    int count=0;
    cin>>a[0];
    int mini=a[0],maxi=a[0];
    for (int i = 1; i < n; i++)
    {
        cin>>a[i];
        if(a[i]<mini)
        {
            mini=a[i];
            count++;
        }
        if(a[i]>maxi)
        {
            maxi=a[i];
            count++;
        }
    }
    cout<<count;
    return 0;
}