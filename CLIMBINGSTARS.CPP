#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
int even(int ind,int n,vector<int> &a)
{
    int ans;
    if(n==ind)return;
    if(a[ind]%2==0)
    {
        ans=a[ind];
        return ans;
    }
    else return;
    cout<<even(ind+1,n,a);    
    
}
void solve()
{
    int n;cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)cin>>a[i];
    even(0,n,a);
}
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      solve();
}
