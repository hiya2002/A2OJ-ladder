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
    int n,m;
    cin>>n>>m;
    int*a=new int[n],max=0,index=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(ceil((double)a[i]/m)>=max)
        {
            max=ceil((double)a[i]/m);
            index=i;
        }
        // cout<<(double)a[i]/m<<" "<<ceil((double)a[i]/m)<<"\n";
    }
    
    cout<<index+1;
    return 0;
}