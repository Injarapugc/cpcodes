#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
void solve()
{
    ll n,k;cin>>n>>k;
    vector<ll> a(n);
    for(auto &x:a)cin>>x;
    ll st=0,end=0;
    ll s=0,c=0;
    while(end<n)
    {
        s+=a[end];
        while(s>=k)
        {
            s-=a[st];
            st++;
        }
        end++;
        c+=end-st;

    }
    cout<<(n*(n+1)/2)-c<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

}
