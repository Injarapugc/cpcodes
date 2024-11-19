#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
const int N=1e5+10; 
vector<bool> prime(N,true);
vector<bool> nick(1000,false);
void seive()
{
    prime[0]=prime[1]=false;
    for(int i=2;i<N;i++)
    {
        if(prime[i])
        {
            for(int j=2*i;j<N;j+=i)
            prime[j]=false;
            is
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      seive();
      int n,k;cin>>n>>k;
      int a=0;
      for(int i=2;i<=n;i++)
      {
        if(prime[i])
        {
            int a=prime[i];
            if(nick[i])a++;
        }
      }
      if(a>=k)cout<<"YES\n";
      else cout<<"NO\n";

}
         