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
    string s;
    cin>>s;
    int f=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
            f=1;
            cout<<"YES";
            break;
        }
    }
    if(f==0)
    {
        cout<<"NO";
    }
    return 0;
}