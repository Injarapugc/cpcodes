#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{
    int f;cin>>f;
    string n;
    cin>>n;
    int i=0,j=0;
    for(ll k=1;k<f;k++)
    {
        if(n[k]=='0'&&n[k-1]=='0')i++;
        else if(n[k]=='1'&&n[k-1]=='1')j++;
    }
    cout<<max(i,j)<<endl;


    
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