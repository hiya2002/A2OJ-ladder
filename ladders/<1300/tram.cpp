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
    int people=0,maxi=0,q;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin>>a>>b;
        people-=a;
        people+=b;
        if(people>maxi)
        {
            maxi=people;
        }
    }
    cout<<maxi;
    return 0;
}