#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{

    vi nums{1,2,4,5};
    vi queries{3,10,24};
    vi ans;
    for(int i=0;i<3;i++)
    {
        int s=0;
        for(int j=0;j<4;j++)
        {
            s+=nums[i];
            if(s>queries[i]) 
            {
                ans.push_back(j);
                break;
            }
        }
    }
    for(auto x:ans) cout<<x<<" "<<endl;
    
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