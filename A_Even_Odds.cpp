#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{
    ll n;
    ll k;
    cin>>n>>k;
    ll r=0;
    if(n%2==0)
    {
        r=n/2;
    }
    else
    {
        r=(n/2)+1;
    }
    if(r>=k)
    {
        cout<<1+(k-1)*2;
    }
    else{
        k=abs(r-k);
        cout<<2+(k-1)*2;
    }
    cout<<endl;
  


    
}
int main()
{
 
    solve();
  }
