#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vi a(n,-1);
    int i=0;
    int j=0;
    int t=0;
    while(t<=n-1)
    {
        if(a[i+1]==-1&&i<n-1) 
        {
            a[i+1]=1;
            cout<<i+2;
            t++;
            i=i+1;
        }
        else
        {
            bool o=true;
            j=i+2;
            while(o)
            {
                if(j+1>n)
                {
                    j=0;
                }
                if(a[j+1]==-1)
                {
                    a[j+1]=1;
                    cout<<j+2;
                    i=j+1;
                    t++;
                    o=false;
                }
                else
                {
                    j=j+1;
                }


            }
        }
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