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
    int n;
    cin>>n;
    vector<int> a[n+1];
    vector<int> f(n+1,0);
    queue<int> r;
    r.push(0);
    f[0]=1;
    while (!r.empty())
    {
        int x=r.front();
        r.pop();
        cout<<x<<endl;
        for(auto i:a[x])
        {
            if(!f[i])
            {
                f[i]=1;
                r.push(i);
            }
        }
        /* code */
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