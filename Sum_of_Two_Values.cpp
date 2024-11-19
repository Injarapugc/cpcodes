#include<bits/stdc++.h>
using namespace std;
#define ll long long 
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{
    ll n,t;
    cin>>n>>t;
    ll s=1e7;
    vi a(s,-1);
    vi b(n);
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        a[b[i]]=i;
    }
    for(ll i=0;i<n;i++)
    {
        if(a[t-b[i]]!=-1&&a[t-b[i]]!=i)
        {
            cout<<i+1<<" "<<a[t-b[i]]+1<<endl;
            return;
 
        }
    }
    cout<<"IMPOSSIBLE\n";
 
 
    
}
int main()
{
    solve();
    
 
}