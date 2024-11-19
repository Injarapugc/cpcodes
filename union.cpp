#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{
   vi a{1,2,3,4,5,6,7};
    vi b{2,3,4,5,6,7};
    vi ans(100);
    ans.clear();
    auto it=set_intersection(a.begin(),a.end(),b.begin(),b.end(),ans.begin());
    ans.resize(it-ans.begin());
    for(auto x:ans)cout<<x; 
    
}
int main()
{

    solve();
  }
