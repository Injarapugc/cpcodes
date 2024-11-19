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
    ll n,m;cin>>n>>m;
    vector<int> a[n+1];
    vector<int> d(n+1,0);
    vector<int> p(n+1,-1);
    for(int i=0;i<m;i++)
    {
        int x1,x2;
        cin>>x1>>x2;
        a[x1].push_back(x2);
        a[x2].push_back(x1);
    }
    d[1]=0;
   
    queue<int> q;
    q.push(1);
    while (!q.empty())
    {
        int x1=q.front();
        q.pop();
        
        d[x1]=1;
        for(auto x:a[x1])
        {
            if(x!=1&&p[x]==-1)
            {
                q.push(x);
                p[x]=x1;
            }
        }
    }
    
    stack<int> s;
    s.push(n);
    int pi=n;
    while(p[pi]!=-1)
    {
        s.push(p[pi]);
        pi=p[pi];
    }
    if(s.top()!=1)
    {
        cout<<"IMPOSSIBLE\n";
        return;
    }
    cout<<s.size()<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
 
}
  
int main()
{
  ll t=1;
  while(t--)
  {
    solve();
  }
}