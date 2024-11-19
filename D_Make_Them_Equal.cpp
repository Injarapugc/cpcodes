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
ll a[1001],k;
ll n,b[1001],c[1001];
ll dp[1001][1001];

void aa()
{
    fi(i,1002,0)a[i]=1e9;
    a[0]=0;
    a[1]=0;
    a[2]=1;
    fi(i,1001,1)
    {
        fi(j,i+1,1)
        {
            int l=i+(i/j);
            if(l<=1000)
           a[l]=min(a[l],a[i]+1);

        }
    }

}

void solve() {
    cin>>n>>k;
    fi(i,n,0)cin>>b[i];
    fi(i,n,0)cin>>c[i];
    k=min(k,12*n);
    vi g(k+1,0);
    fi(i,n,0)
    {
        for(int j=k-a[b[i]];j>=0;j--)
        {
            g[j+a[b[i]]]=max(g[j+a[b[i]]],g[j]+c[i]);

        }
    }
    cout<<a[7]<<a[5]<<a[2]<<endl;
   


    
}

  
int main()
{
  ll t;
  cin>>t;
  aa();
  while(t--)
  {
    solve();
  }
}
