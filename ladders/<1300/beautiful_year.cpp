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
    int t = 1;
    cin>>t;
    bool q=true;
    while(q)
    {
        t++;int n=t;
        int*d=new int[10]();
        int f=0;
        while(n)
        {
            d[n%10]++;
            if(d[n%10]==2)
            {
                f=1;
                break;
            }
            n/=10;
        }
        if(f==0)
        {
            cout<<t;
            q=false;
        }
    }
    return 0;
}