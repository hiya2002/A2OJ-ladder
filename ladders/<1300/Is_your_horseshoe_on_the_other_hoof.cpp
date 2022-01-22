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
    int*a=new int[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    int ans=0;
    for (int i = 0; i < 4; i++)
    {
        int c=1;
        for (int j = i+1; j < 4; j++)
        {
            if(a[i]==a[j]&&a[i]!=-1)
            {
                a[j]=-1;
                c++;
            }
        }
        ans+=c-1;
    }
    cout<<ans;
    return 0;
}