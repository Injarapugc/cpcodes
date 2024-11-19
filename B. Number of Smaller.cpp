#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
void solve(vi a,vi b,ll l,ll m)
{
    ll i=0,j=0;
    while(i<m)
    {
        if(j>=l)
        {
            cout<<l<<" ";
            i++;
        }
        else if(b[i]>a[j])
        {
            j++;
        }
        else{
            cout<<j<<" ";
            i++;
        }
    }
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      ll l,m;cin>>l>>m;
      vi a(l),b(m);
      for(ll i=0;i<l;i++)cin>>a[i];
      for(ll i=0;i<m;i++)cin>>b[i];
      solve(a,b,l,m);

}
