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
    long long int l=0;
    for (long long int i = 0; i < s.length(); i++)
    {
        if(s[i]=='4'||s[i]=='7')
        {
            l++;
        }
    }
    if(l==0)
    {
        cout<<"NO";
    }
    else
    {
        int f=0;
        while(l)
        {
            if(l%10!=4&&l%10!=7)
            {
                f=1;
                break;
            }
            l/=10;
        }
        if(f==1)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
    }
    return 0;
}