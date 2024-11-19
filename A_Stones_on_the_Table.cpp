#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    int j=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1]) j++;
    }
    cout<<j<<endl;
  


    
}
int main()
{
  
    solve();
  }
