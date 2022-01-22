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
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='-'&&s[i+1]=='-')
        {
            cout<<"2";i++;
        }
        else if(s[i]=='-'&&s[i+1]=='.')
        {
            cout<<"1";i++;
        }
        else if(s[i]=='.')
        {
            cout<<"0";
        }
    }
    return 0;
}
