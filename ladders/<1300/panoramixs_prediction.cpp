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
bool isPrime(int n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
   
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
   
    return true;
}
int nextPrime(int N)
{
    if (N <= 1)
        return 2;
 
    int prime = N;
    bool found = false;
    while (!found) {
        prime++;
 
        if (isPrime(prime))
            found = true;
    }
 
    return prime;
}
 

int main()
{
    int n,m;
    cin>>n>>m;
    if(nextPrime(n)==m)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}