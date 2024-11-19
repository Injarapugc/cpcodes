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
    ll n,m,k;cin>>n>>m>>k;
    vector<vi> a[n+1];
    fi(i,m,0)
    {
        ll x1,x2,x3;cin>>x1>>x2>>x3;
        a[x1].push_back({x2,x3,0});
        a[x2].push_back({x1,x3,0});
    }
    fi(i,k,0)
    {
        ll x1,x2,x3;cin>>x1>>x2;
        a[1].push_back({x1,x2,1});
        a[x1].push_back({1,x2,1});
    }
    priority_queue<pair<ll, pair<ll, ll>>, vector<pair<ll, pair<ll, ll>>>, greater<pair<ll, pair<ll, ll>>>> q;
    q.push({0,{1,-1}});
    vi d(n+1,1e9);
    d[1]=0;
    vi t(n+1,0);
    ll ans=0;
    while(!q.empty())
    {
         int dist=q.top().first;
         ii j=q.top().second;
         q.pop();
         ll node=j.first;
         ll signal=j.second;
         if(d[node]<dist) continue;
         if(signal==1) ans++;
         
         for(auto x:a[node])
         {
            int x1=x[0],x2=x[1],x3=x[2];
            if(d[x1]>dist+x2)
            {
                d[x1]=dist+x2;
                q.push({d[x1],{x1,x3}});
                t[x1]=x3;
            }
            else if(d[x1]==dist+x2)
            {
                 if(!x3) t[x1]=0;
            }
            

            
             

         }
    }
    int sum=accumulate(t.begin(),t.end(),0);
    cout<<k-sum<<endl;

}
  
int main()
{
  ll t=1;
  while(t--)
  {
    solve();
  }
}
