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

void g(int i,vector<int> a[],vector<int> &f,vector<int> &ans)
{
    f[i]=1;
    ans.push_back(i);
    for(auto x:a[i])
    {
        if(f[x]==0) g(x,a,f,ans);

    }


}
void solve()
{
    ll n;
    cin>>n;
    vi a(n+2);
    fi(i,n+1,1)cin>>a[i];
    a[0]=0,a[n+1]=1;
    int f=-1;
    fi(i,n+1,0)
    {
        if(a[i]==0&&a[i+1]==1)
        {
            f=i;
            break;
        }
    }
    if(f==-1)
    {
        cout<<-1<<endl;
        return;
    }
    fi(i,f+1,1)cout<<i<<" ";
    cout<<n+1<<" ";
    fi(i,n+1,f+1)cout<<i<<" ";
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