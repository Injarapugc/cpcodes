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
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> a(n,vector<ll>(m));
    fi(i,n,0)fi(j,m,0)cin>>a[i][j];
    auto it=[&](int i,int j)
    {
        return i>=0&&j>=0&&i<n&&j<m;

    };
    int r[]={1,-1,0,0};
    int c[]={0,0,-1,1};
    fi(i,n,0)
    {
        fi(j,m,0)
        {
            ll x1=a[i][j];
            ll ff=-1;

            fi(k,4,0)
            {
                int v1=i+r[k];
                int v2=j+c[k];
                if(it(v1,v2))
                {
                    ff=max(ff,a[v1][v2]);
                }
            }
            if(x1>ff)
            {
                a[i][j]=ff;
                j++;
            }
        }
    }
    fi(i,n,0)
    {
        fi(j,m,0)cout<<a[i][j]<<" ";
        cout<<endl;
    }

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
