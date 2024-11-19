#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
int sto(string n)
{
    int ans=0;
    for(auto x:n)
    {
        int l=int(x)-48;
        ans=ans*10+l;
    }
    return ans;
}
void solve()
{
    string n;
    cin>>n;
    string f,x;
    int s=0;
    for(auto x:n)
    {
        if(isspace(x))
        {
            break;
        }
        s++;

    }
    x=n.substr(0,s);
    int k=sto(x);
    f=n.substr(s+1,k);
    cout<<x<<" "<<f<<" "<<k;
    int j=sto(n);


    
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