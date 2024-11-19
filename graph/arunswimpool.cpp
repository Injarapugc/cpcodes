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
    ll m,n;
    cin>>m>>n;
    ll a[m][n];
    for(int i=0;i<m;i++)for(int j=0;j<n;j++)cin>>a[i][j];
    vector<int> r{1,-1,0,0};
    vector<int> c{0,0,-1,1};
    int p=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==1)
            {
                int ans=4;
                for(int k=0;k<4;k++)
                {
                    int x1=i+r[k];
                    int x2=j+c[k];
                    if(x1>=0&&x2>=0&&x1<m&&x2<n)
                    {
                        if(a[x1][x2]==1)
                        {
                            ans--;
                        }
                    }
                }
                p+=ans;
            }
        }
    }
      cout<<p<<endl;
  


    
}
int main()
{
  
    solve();
}