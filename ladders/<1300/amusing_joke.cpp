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
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1.length()+s2.length()!=s3.length())
    {
        cout<<"NO";
    }
    else
    {
        string wd="";
        wd+=s1;
        wd+=s2;
        sort(wd.begin(),wd.end());
        sort(s3.begin(),s3.end());
        if(s3==wd)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    return 0;
}