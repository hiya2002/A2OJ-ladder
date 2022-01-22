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
    string a,b;
    cin>>a>>b;
    for (int i = 0; i < a.length(); i++)
    {
        if(a[i]!=b[i])
        {
            cout<<1;
        }
        else
        {
            cout<<0;
        }
    }
    return 0;
}