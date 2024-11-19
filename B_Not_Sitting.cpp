#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vi a;
    for(int i=1;i<=n;i++)
    {
        int x=INT_MIN;
       
        for(int j=1;j<=m;j++)
        {
            int d=max(i-1,n-i)+max(j-1,m-j);
            a.push_back(d);
        }
    }
    sort(a.begin(),a.end());
    for(auto x:a)cout<<x<<" ";
    cout<<endl;
  


    
}
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    solve();
  }
}