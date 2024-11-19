#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
bool solve(int n,int s)
{
    if(s>=n)
    {
        if(s==n) return 1;
        return 0;
    }
    bool j,k;
    j=k=0;
     j=solve(n,s*10);
    k=solve(n,s*20);
    return j||k;

  


    
}
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    if(solve(n,1))cout<<"YES\n";
    else cout<<"NO\n";
  }
}