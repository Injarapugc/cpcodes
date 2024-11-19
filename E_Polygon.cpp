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
    vector<string> a(n);
    auto it=[&](int i,int j)
    {
        return i>=0&&j>=0&&i<n&&j<n;
    };
    fi(i,n,0)cin>>a[i];
    fi(i,n,0)
    {
        fi(j,n,0)
        {
            if(j==n-1||i==n-1)continue;
            if(a[i][j]=='1')
            {
                int x1=0,x2=0;
              
                if(it(i,j+1))
                {
                    if(a[i][j+1]=='0')x1=1;
                }
                if(it(i+1,j))
                {
                    if(a[i+1][j]=='0') x2=1;
                }
                if(x1==1&&x2==1)
                {
                    cout<<"NO\n";
                    return;
                }

            }
        }
    }
    cout<<"YES\n";
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
