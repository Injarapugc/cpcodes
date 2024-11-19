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
const ll LINF=0x3f3f3f3f3f3f3f3fll;

void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> a[n+1];
    for(int i=0;i<m;i++)
    {
        ll x1,x2,x3;
        cin>>x1>>x2>>x3;
        a[x1].push_back({x2,x3});

    }
    vector<ll> p(n+1,LINF);
    p[1]=0;
    vector<ll> ai(n,0);
   set<pair<ll,ll>> q;
    q.insert({0,1});
    while(!q.empty())
    {
        pair<ll,ll> q1=*q.begin();
        ll x1=q1.first;
        ll x2=q1.second;
        q.erase(q.begin());
        if(x1>p[x2])continue;
        for(auto x:a[x2])
        {
            int v=x[0];
            ll c=x[1];
            if(p[x2]+c<p[v])
            {
                p[v]=p[x2]+c;
                q.insert({p[v],v});
            }
        }
    }
    for(int i=1;i<=n;i++)cout<<p[i]<<" ";

    

    }
void gg()
{
    ll n,m;
    cin>>n>>m;
    vector<vi> a[n+1];
    fi(i,m,0)
    {
        ll x1,x2,d;
        cin>>x1>>x2>>d;
        a[x1].push_back({x2,d});
    }
    vi ans(n+1,LINF);
    ans[1]=0;
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> q;
    q.push({0,1});
    while(!q.empty())
    {
         ll x1=q.top().first;
         ll x2=q.top().second;
         q.pop();
         if(x1>ans[x2])continue;
         for(auto x:a[x2])
         {
            ll v=x[0],c=x[1];
            if(ans[v]>c+ans[x2])
            {
                ans[v]=c+ans[x2];
                q.push({ans[v],v});
            }
         }
    }
    fi(i,n+1,1)cout<<ans[i]<<" ";
}
   
    


  
int main()
{
  ll t;
  t=1;
  while(t--)
  {
    gg();
  }
}
