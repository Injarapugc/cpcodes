#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
static bool cmp(pair<int,int> &a,pair<int,int> &b)
{
    return a.second>b.second;
}
void solve()
{
    vi colours{1,1,1,6,1,1,1,5};
    map<int,int> a;
        for(int i=0;i<colours.size();i++)
        {
            a[colours[i]]=i+1;
        }
        vector<pair<int,int>> r;
        for(auto x:a)
        {
            r.push_back({x.first,x.second});
        }
        for(auto x:a)cout<<x.first<<" "<<x.second<<endl;
        sort(r.begin(),r.end(),cmp);
        for(auto x:r)cout<<x.first<<" "<<x.second<<" ";
        cout<<endl;


    
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