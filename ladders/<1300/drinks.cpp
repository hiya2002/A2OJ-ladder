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
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        sum+=a;
    }
    double d=(double)sum/(double)n;
    cout<<d;
    return 0;
}