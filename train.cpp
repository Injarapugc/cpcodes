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
    vi a(n),b(n);
    fi(i,n,0)cin>>a[i];
    fi(i,n,0)cin>>b[i];
    vi ans(n);
    fi(i,n,0)
    {
        ans[i]=a[i]-b[i];
    }
    ll riz=accumulate(ans.begin(),ans.end(),0);
    if(riz<0){cout<<-1<<endl;
         return;
    }
    else
    {
        ll jj=-1,kk=-1;
        fi(i,n,0)if(jj<ans[i]) {jj=ans[i],kk=i;}
         cout<<kk<<endl;
    }
  


    
}
int main()
{
   ll tc;cin>>tc;
   while(tc--)
    solve();
  
}