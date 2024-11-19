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
    ll n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(ll i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a[i].first=x;
        a[i].second=i;
    }
    int s=1;
    sort(a.begin(),a.end(),cmp);
    cout<<endl;
    for(ll i=1;i<n;i++)
    {
        if(a[i].second<a[i-1].second) s++;
    }
    cout<<s;
    
}
int main()
{
  
    solve();
  }
