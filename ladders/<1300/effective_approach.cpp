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
    unordered_map<int,int>mp;
    int*a=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        mp[a[i]]=i+1;
    }
    long long int v=0,s=0,b;
    cin>>b;
    for (int i = 0; i < b; i++)
    {
        int q;
        cin>>q;
        v+=mp[q];
        s+=n-mp[q]+1;
    }
    cout<<v<<" "<<s;
    return 0;
}