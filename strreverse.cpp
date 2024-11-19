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
    int i=0;
    int j=s.size()-1;
    while (i<j)
    {
        swap(s[i++],s[j--]);
    }
    cout<<s<<endl;
    
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