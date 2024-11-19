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
    int n;
    cin>>n;
    vi a(n);
    int k;
    cin>>k;
    fi(i,n,0)cin>>a[i];
    int ans=0;
    int j=0;
    map<int,int> f;
    for(int i=0;i<n;i++)
    {
        f[a[i]]++;
        while((i-j)+1>=k)
        {
            f[a[j]]--;
            j++;
            if(f.count(a[i])==0)
            {
                f.erase(a[i]);
            }
            int lil=f.size();
            ans=max(ans,lil);

        }
    }
    cout<<ans;
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
