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
const int N=1e4;
int r[N] {0};
void sieve()
{
    fi(i,N,2)
    {
        if(!r[i])
        {
            for(int j=2*i;j<N;j+=i)r[j]=1;
        }

    }
}

void solve()
{
    int n;
    cin>>n;
    char f;
    cin>>f;
    string g;
    cin>>g;
    sieve();
    ll aa=0;
    fi(i,n,0)
    {
        if(g[i]!=f)aa++;
    }
   
    set<int> ans;
    fi(i,n+1,2)
    {
        if(aa==0) break;
        if(!r[i])
        {
            for(int j=i;j<=n;j+=i)
            {
                if(g[j-2]!=f)
                {
                    g[j-2]=f;
                    aa--;
                    ans.insert(i);
                }
                if(j<n&&g[j]!=f)
                {
                    g[j]=f;
                    aa--;
                    ans.insert(i);
                }
            }

        }

    }
    cout<<g;
   
    if(ans.empty())cout<<0<<endl;
    else
    {
        cout<<ans.size()<<endl;
      for(auto x:ans)cout<<x<<" ";
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
