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
struct s
{
    int x,y;
};
int main()
{
    int n,m;
    cin>>n;
    s a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].x>>a[i].y;
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        int l=0,r=0,u=0,d=0;
        int c=0;
        for (int j = 0; j < n; j++)
        {
            if(i!=j)
            {
                if((a[j].x==a[i].x&&a[j].y<a[i].y))
                {
                    l++;
                }
                else if(a[j].x==a[i].x&&a[j].y>a[i].y)
                {
                    r++;
                }
                else if(a[j].x>a[i].x&&a[j].y==a[i].y)
                {
                    d++;
                }
                else if(a[j].x<a[i].x&&a[j].y==a[i].y)
                {
                    u++;
                }
            }
        }
        if(l&&r&&u&&d)
        {
            count++;
        }

    }
    cout<<count;
    return 0;
}