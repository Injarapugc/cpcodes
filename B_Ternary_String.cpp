#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int l=0;
    int r=0;
    int m=INT_MAX;
    map<int,int> ans;
    for(int i=0;i<s.length();i++)
    {
        ans[s[i]]++;
        while(ans['1']>0&&ans['2']>0&&ans['3']>0)
        {
            ans[s[l]]--;
            l++;
            m=min(m,i-l+1);
        }
    }
    if(m==INT_MAX) cout<<0<<endl;
    else cout<<m+1<<endl;
  


    
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