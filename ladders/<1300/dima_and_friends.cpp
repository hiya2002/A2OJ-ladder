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
    int*a=new int[n],sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int c=0;
    for (int i = 1; i < 6; i++)
    {
        if(((sum+i)%(n+1))!=1)
        {
            c++;
        }
    }
    cout<<c;
    return 0;
}