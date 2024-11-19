#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i,n,x)  for (int i = x; i < int(n); i++)
#define mod 1000000007
using namespace std;


void solve()
{
    string f;
    cin>>f;
    int k;
    cin>>k;
    map<char,int> ans;
    int j=0,an=0;
    for(int i=0;i<f.length();i++)
    {
        ans[f[i]]++;
        while((i-j)+1==k)
        {
            int k=0;
            for(auto x:ans)
            {
                if(x.second>1)
                {
                    k=1;
                    break;
                }
            }
            if(k==0) an++;
            ans[f[j]]--;
            j++;

        }
    }
    cout<<an;


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
