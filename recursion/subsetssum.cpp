#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
  ll mod=1000000007;
void  sum (int ind,int n,int s,vector<int> &a,vector<int> &ans)
{
    if(ind==n)
    {
        ans.push_back(s);
        return;
    }
    sum(ind+1,n,s+a[ind],a,ans);
     sum(ind+1,n,s,a,ans);

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    vector<int> a(n);
    for(auto &x:a)cin>>x;
    ll size=pow(2,n);
    vector<int> ans(size);
    sum(0,n,0,a,ans);
    for(auto x:ans)cout<<x<<endl;


    
    return 0;
}