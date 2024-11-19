#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i,n,x)  for (int i = x; i < int(n); i++)
#define mod 1000000007
#define ss(a) sort(a.begin(),a.end())
/*
      "Beloved,
       never avenge yourselves,
        but leave it to the wrath of God, for it is written,
        Vengeance is mine, I will repay" - ROMAN 12:19
 */

/*
    Remeber the pain
    Remeber how worthless they made you feel
    Turn that pain into anger
    and show them who you're really are
*/

using namespace std;



void solve() {
    ll n;cin>>n;
    vi a(n);
    vi v(n,0);
    vi vis(n,0);
    string s;
    fi(i,n,0)
    {
        cin>>a[i];
        a[i]--;
    }
    cin>>s;
    fi(i,n,0)
    {
        if(!vis[i])
        {
            vi c;
            int cc=0;
            int j=i;
            while(!vis[j])
            {
                vis[j]=1;
                c.push_back(j);
                if(s[j]=='0')cc++;
                j=a[j];
            }
            for(auto xx:c)v[xx]=cc;

        }
    }
    fi(i,n,0)cout<<v[i]<<" ";
    cout<<endl;
    
}

  
int main()
{
  ll t;cin>>t;
  while(t--)
  {
    solve();
  }
}
