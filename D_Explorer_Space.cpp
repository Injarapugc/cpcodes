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
ll n,m,ki;
vector<vector<vector<ll>>> dp(501,vector<vector<ll>>(501,vector<ll>(21)));
ll v[201][201],h[201][201];


bool c(int i,int j)
{
     return i>=0&&j>=0&&i<n&&j<m;
}
void solve() {
    cin>>n>>m>>ki;
    for(int i=0;i<n;i++)
    {
        fi(j,m-1,0)cin>>h[i][j];
    }
    fi(i,n-1,0)fi(j,m,0)cin>>v[i][j];
    int i1[]={-1,0,0,1},i2[]={0,-1,1,0};
   
    fi(k,ki+1,0)
    {
        fi(i,n,0)
        {
            fi(j,m,0)
            {
                if(k&1)dp[i][j][k]=-1;
                else
                {
                    if(k==0)dp[i][j][k]=0;
                    else
                    {
                         dp[i][j][k]=1e9;
                         fi(l,4,0)
                         {
                             int f1=i+i1[l],f2=j+i2[l];
                             if(c(f1,f2))
                             {
                                 ll ww=0;
                                 if(f1!=i)ww=v[min(f1,i)][j];
                                 else ww=h[i][min(f2,j)];
                                 dp[i][j][k]=min(dp[i][j][k],dp[f1][f2][k-2]+2*ww);

                             }

                         }
                    }

                }
            }
        }
         
    }
    fi(i,n,0)
    {
        fi(j,m,0)cout<<dp[i][j][ki]<<" ";
        cout<<endl;
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
