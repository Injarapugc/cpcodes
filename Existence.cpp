#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
ll M=1e18+10;
int as(int a,int b)
{
  return(a%M+b%M)%M;
}
int mu(int a,int b)
{
    return((a%M)*(b%M))%M;
}
int su(int a,int b)
{
    return((a%M-b%M)%M+M)%M;
}
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)
    {
        ll x,y;cin>>x>>y;
        ll sum1=(x*x*x*x)+4*(y*y);
        ll sum2=4*(x*x)*y;
        if(sum1==sum2)cout<<"YES\n";
        else cout<<"NO\n";
    
    }
    return 0;
}