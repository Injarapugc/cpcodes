#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n;
ll w[20];
ll solve(int i,ll s1,ll s2)
{
    if(i==n)
    {
        return abs(s1-s2);
    }
    return min(solve(i+1,s1+w[i],s2),solve(i+1,s1,s2+w[i]));
}
int  main()
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>w[i];
    cout<<solve(0,0,0);
}
