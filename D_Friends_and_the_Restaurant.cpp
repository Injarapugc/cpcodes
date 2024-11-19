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

void solve()
{
    ll n;
    cin>>n;
    vector<pair<int,int>> a(n),a1(n),b1(n);
    fi(i,n,0)cin>>a[i].first;
    fi(i,n,0)cin>>a[i].second;
    vi sum(n);
    fi(i,n,0)
    {
        sum[i]=a[i].second-a[i].first;
    }
    sort(sum.begin(),sum.end());
    ll ans=0;
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(sum[i]+sum[j]>=0)
        {
            i++;
            j--;
            ans++;
        }
        else
        {
            i++;
        }
    }
    cout<<ans<<endl;





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
