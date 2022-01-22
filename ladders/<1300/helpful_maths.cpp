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
    string s,wd="";
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]!='+')
        {
            wd+=s[i];
        }
    }
    sort(wd.begin(),wd.end());
    for (int i = 0; i < wd.length()-1; i++)
    {
        cout<<wd[i]<<"+";
    }
    cout<<wd[wd.length()-1];
    return 0;
}