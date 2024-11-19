#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
bool cmp(pair<int,int> &a,pair<int,int> &b) {return a.first<b.first;}
void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<pair<int,int>> a(n+2);
    for(ll i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        a[i].first=x;
        a[i].second=i;
    }
    a[0].first=0;
    a[0].second=-1;
    a[n+1].first=n+1;
    a[n+1].second=-1;
    int s=1;
    sort(a.begin()+1,a.end()-1,cmp);
    for(ll i=1;i<n;i++)
    {
        if(a[i].second<a[i-1].second) s++;
    }
    cout<<s<<endl;
    for(ll i=0;i<k;i++)
    {
        ll b1,b2;
        cin>>b1>>b2;
        swap(a[b1].second,a[b2].second);
        if(a[b1].second<a[b1-1].second) s++;
        if(a[b1+1].second<a[b1].second) s++;
         if(a[b2].second<a[b2-1].second) s++;
        if(a[b2+1].second<a[b2].second) s++;
        cout<<s<<endl;
    }


    
}
int main()
{
  
    solve();
  }
