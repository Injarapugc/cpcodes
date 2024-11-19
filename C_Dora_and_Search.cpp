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
    ll n;
    cin>>n;
    vi a(n);
    fi(i,n,0)cin>>a[i];
    if(n<=3)
    {
        cout<<-1<<endl;
        return;
    }
    int kk=-1;
    int f1=0;
    int f2=n-1;
    int mn=1;
    int mx=n;
    while(f1<=f2)
    {
        if(a[f1]==mn)
        {
            f1++;
            mn++;
        }
        else if(a[f1]==mx)
        {
            mx--;
            f1++;
        }
        else if(a[f2]==mn)
        {
            f2--;
            mn++;
        }
        else if(a[f2]==mx)
        {
            mx--;
            f2--;
        }
        else 
        {
            kk=0;
            break;
        }
    }
    if(kk==0)cout<<f1+1<<" "<<f2+1<<endl;
    else cout<<kk<<endl;

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
