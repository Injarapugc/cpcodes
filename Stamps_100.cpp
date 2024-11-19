#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{
    int s;
    cin>>s;
    string n;
    cin>>n;
    for(int i=0;i<s-2;i++)
    {
        if(n[i]=='1')
        {
            n[i]='1';
            n[i+1]='0';
            n[i+2]='0';
        }

    }
    cout<<n<<endl;
  


    
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