#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <queue>
#include <math.h>
#include <stdlib.h>
#include <deque>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    if(s1==s2)
    {
        cout<<0;
    }
    for (int i = 0; i < s1.length(); i++)
    {
        if(s1[i]<s2[i])
        {
            cout<<-1;
            break;
        }
        else if(s1[i]>s2[i])
        {
            cout<<1;
            break;
        }
    }
    return 0;
}