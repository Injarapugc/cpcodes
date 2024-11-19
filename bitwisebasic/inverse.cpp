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


void solve(int n)
{
    int x=0;
    for(int i=10;i>=0;i--)
    {
        int y=((n>>i)&(1));
        if(y==0&&x==0)continue;
        else
        {
            x=1;
            cout<<y;
        }
    }
    cout<<"\n";
}
  
int main()
{
    int a;
    cin>>a;
    solve(a);
    solve(~a);
    solve(a^(1<<0));
    cout<<__builtin_popcount(a);
 
}
