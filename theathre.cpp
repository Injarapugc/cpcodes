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
    string s;
    cin>>s;
    int ans=0;
    int ans1=0;
    for(int i=0;i<s.length();i++)
    {
        if(i%2==0)
        {
            if(s[i]!='1')ans++;
        }
        else
        {
            if(s[i]!='0')ans++;
        }
    }
    for(int i=0;i<s.length();i++)
    {
        if(i%2==0)
        {
            if(s[i]!='0')ans1++;
        }
        else
        {
            if(s[i]!='1')ans1++;
        }
    }
    cout<<min(ans,ans1)<<endl;

  


    
}
int main()
{
  
    solve();
  
}