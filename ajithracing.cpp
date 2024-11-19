#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i,n,x)  for (int i = x; i < int(n); i++)
#define mod 1000000007
using namespace std;
static bool cmp(pair<int,int> a,pair<int,int> b) {return a.first<b.first;}
void solve()
{
    ll n;cin>>n;
    vector<pair<int,int>> a(n);
    fi(i,n,0)cin>>a[i].first>>a[i].second;
    sort(a.begin(),a.end(),cmp);
    ll s=-1;
    ll k=0;
    for(auto x:a)
    {
        if(x.first>s)
        {
            s=x.second;
        }
        else {k=1;break;}
    }
    if(k==0)cout<<"true\n";
    else cout<<"false\n";


  


    
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