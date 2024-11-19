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
int N=0;
vector<int> a,b;
void dfs(int i,vector<int> ai[],int j)
{
    a[i]=1;
    for(auto x:ai[i])
    {
        if(a[x])
        {
            if(x==j)continue;
            N=1;
        }
        if(!a[x])
        {
            if(b[j]==1) b[x]=2;
            else b[x]=1;
          
            dfs(x,ai,i);
        }
    }
    

}
void solve()
{
    int n,m;
    cin>>n>>m;
    a.resize(n+1),b.resize(n+1);
    a.assign(n+1,0),b.assign(n+1,0);
    vector<int> ai[n+1];
    fi(i,m,0)
    {
        int x1,x2;
        cin>>x1>>x2;
        ai[x1].push_back(x2);
        ai[x2].push_back(x1);
    }
    fi(i,n+1,1)
    {
        if(a[i]==0)
        {
            queue<int> q;
            q.push(i);
            a[i]=1;
            b[i]=1;
            while(!q.empty())
            {
                int x=q.front();
                q.pop();
                for(auto x1:ai[x])
                {
                    if(a[x1]==0)
                    {
                        a[x1]=1;
                        q.push(x1);
                        b[x1]=b[x]==1?2:1;
                    }
                    else if(b[x1]==b[x])
                    {
                        cout<<"IMPOSSIBLE\n";
                        return ;
                    }
                }
            }
        }
    }
    fi(i,n+1,1)
    {
        cout<<b[i]<<" ";
    }
    
   
/***
 10 20
3 4
8 10
3 7
1 8
2 8
9 10
2 4
6 9
1 4
3 5
1 9
6 7
2 9
2 7
1 7
4 10
5 6
4 6
3 8
7 10
 */

}  

  
int main()
{
  ll t=1;
  while(t--)
  {
    solve();
  }
}
