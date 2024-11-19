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
vi r,p,s;
ll f(int i)
{
    if(p[i]==i) return i;
    return p[i]=f(p[i]);
}
void uu(int i,int j)
{
    i=f(i),j=f(j);
    if(r[i]>r[j])p[j]=i;
    else if(r[i]<r[j])p[i]=j;
    else
    {
        r[i]++;
        p[j]=i;
    }
}
void ss(int i1,int j1)
{
    int i=f(i1),j=f(j1);
    if(i==j) return;
    if(s[i]>s[j])
    {
        p[j]=i;
        s[i]+=s[j];
    }
    else
    {
        p[i]=j;
        s[j]+=s[i];
    }
}

void solve()
{
    int n;
    cin>>n;
    r.resize(n*n),p.resize(n*n),s.resize(n*n);
    fi(i,n*n,0)p[i]=i;
    fi(i,n*n,0)s[i]=1;
    int a[n][n];
    fi(i,n,0)
    {
        fi(j,n,0)cin>>a[i][j];
    }
    int r[]={-1,1,0,0};
    int c[]={0,0,1-1};
    auto it=[&](int i,int j)
    {
        return i>=0&&j>=0&&i<n&&j<n;
    };
    fi(i,n,0)
    {
        fi(j,n,0)
        {
            if(a[i][j]==0)continue;
            fi(k,4,0)
            {
                int x1=i+r[k],x2=j+c[k];
                if(it(x1,x2)&&a[x1][x2]==1)
                {
                    int nn=i*n+j;
                    int adn=x1*n+x2;
                    ss(nn,adn);
            
                }
            }

        }
    }
    
    fi(i,n,0)
    {
        fi(j,n,0)
        {
               int nn=i*n+j;
               cout<<s[nn]<<" ";

        }
        cout<<endl;
    }
     fi(i,n,0)
    {
        fi(j,n,0)
        {
               int nn=i*n+j;
               cout<<p[nn]<<" ";

        }
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
