#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i,n,x)  for (int i = x; i < int(n); i++)
#define mod 1000000007
#define pb push_back
#define pob pop_back
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
    string a,b;
    cin>>a>>b;
    ll tar=0;
    ll n=a.length();
    fi(i,n,0)tar+=a[i]=='+'?1:-1;
    vector<vector<double>> dp(n+1,vector<double>(2*n+1,0.0));
    dp[0][n]=1.0;
    
    fi(i,n,0)
    {
        fi(j,2*n+1,0)
        {
            if(dp[i][j]==0)continue;
            if(b[i]=='+'||b[i]=='?')
            {
                 dp[i+1][j+1]+=dp[i][j]*(b[i]=='?'?0.5:1.0);
            }
             if(b[i]=='-'||b[i]=='?')
            {
                 dp[i+1][j-1]+=dp[i][j]*(b[i]=='?'?0.5:1.0);

            }
        }
    }
    double re=dp[n][n+tar];
    cout<<setprecision(12)<<fixed<<re<<endl;
 

  

    
}

  
int main()
{
  ll t=1;
  while(t--)
  {
    solve();
  }
}
