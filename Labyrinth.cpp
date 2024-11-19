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
int n,m;
char a[10001][10001];
int v[1001][1001];
int r[4] = {-1, 0, 1, 0};
int c[4] = {0, 1, 0, -1};
string stepd = "URDL";
int p[10001][1001];
 
 
void solve()
{
    cin>>n>>m;
    queue<ii> q;
    ii b,e;
    for(int i=0;i<n;i++)
    {
        fi(j,m,0)
        {
            cin>>a[i][j];
            if(a[i][j]=='A')
            {
                b=make_pair(i,j);
            }
            else if(a[i][j]=='B')
            {
                e=make_pair(i,j);
            }
        }
    }
    q.push(b);
    v[b.first][b.second]=1;
    while(!q.empty())
    {
        ii u=q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            int x1=u.first+r[i],x2=u.second+c[i];
            if(x1<0||x2<0||x1>=n||x2>=m) continue;
            if(a[x1][x2]=='#') continue;
            if(v[x1][x2]==1) continue;
            v[x1][x2]=1;
            p[x1][x2]=i;
            q.push({x1,x2});
        }
    }
    string ans;
    if(v[e.first][e.second])
    {
        cout<<"YES\n";
        while(e!=b)
        {
            int prev=p[e.first][e.second];
            ans.push_back(stepd[prev]);
            e=make_pair(e.first-r[prev],e.second-c[prev]);
        }
        reverse(ans.begin(),ans.end());
        cout<<ans.length()<<endl;
        cout<<ans;
    }
    else cout<<"NO\n";
}
  
int main()
{
  ll t;
  t=1;
  while(t--)
  {
    solve();
  }
}