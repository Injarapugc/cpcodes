#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i,n,x)  for (int i = x; i < int(n); i++)
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
 
#define            pb                push_back
#define mod 1000000007
using namespace std;

void solve()
{
    ll n;
    cin>>n;
     vi a(n+1,0);
     vi b(n+1,0);
     for(int i=0;i<n;i++)
     {
        int x;
        cin>>x;
        if(x<=n)a[x]++;
     }
     fi(i,n+1,1)
     {
        for(int j=i;j<=n;j+=i)
        {
            b[j]+=a[i];

        }
     }
     cout<<*(max_element(b.begin(),b.end()))<<endl;

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