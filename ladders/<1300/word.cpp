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
    string s;
    cin>>s;
    int u=0,l=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(isupper(s[i]))
        {
            u++;
        }
        else
        {
            l++;
        }
    }
    if(u>l)
    {
        for (int i = 0; i < s.length(); i++)
        {
            char ch=toupper(s[i]);
            cout<<ch;
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            char ch=tolower(s[i]);
            cout<<ch;
        }
    }
    return 0;
}