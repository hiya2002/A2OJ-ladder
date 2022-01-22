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
    string s;
    cin>>s;
    int f=0;
    for (int i = 0; i < s.length()-1; )
    {
        int k=i+1;
        while(s[i]==s[k])
        {
            k++;
        }
        f+=(k-i-1);
        i=k;
    }
    cout<<f;
    return 0;
}