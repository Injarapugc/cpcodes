#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define ppb pop_back
#define all(_obj) _obj.begin(), _obj.end()
#define FastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define vi vector<int>
#define for0(i,n) for(int i=0;i<(int)n;i++)
#define readarr(a) for0(i,a.size()) cin >> a[i]
int mod=1e9+7;
//-----------------------global variable-------------------------------
string yes="YES\n",no="NO\n";
//---------------------------------------------------------------------
vector<ll>fact,inverse;
// code by Ravikant sharma
// ______________________________

ll gcd(ll n1, ll n2)
{
    if (n2 != 0)
       return gcd(n2, n1 % n2);
    else 
       return n1;
}

ll power(ll a,ll b){
    if(b==0)return 1;
    if(b%2==0)return power((a%mod)*(a%mod),b/2);
    return ((a%mod)*power(a,b-1)%mod)%mod;
}


ll binaryin(ll a){
    return power(a,mod-2);
}
void factorial(){
    fact.resize(103,1);
    inverse.resize(103,0);
    int n=101;
    fact[1]=1;
    inverse[1]=1;
    for(int i=2;i<n;i++){
        fact[i]=(fact[i-1]%mod * i)%mod;
        inverse[i]=binaryin(fact[i]);
    }
}

static bool cmp(pair<int,int>&addd,pair<int,int>&b){
    return addd.second<b.second;
}

vector<bool>prime;
int n=1e6+2;
vector<int>pri;
void SieveOfEratosthenes()
{
    prime.resize(n,1);
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            pri.push_back(p);
}

void hello(){
   int k;
   cin>>k;
   if(prime[k]){
       ll ans=0;
       for(auto i:pri){
           if(i<=k){
               ans+=i;
           }
           else break;
       }
       cout<<ans*k<<"\n";
       return;
   }
   else{
       ll ans=0;
       for(auto i:pri){
           if(i>=k)break;
           ans+=i;
           if(k%i==0)break;
       }
       cout<<ans*k<<"\n";
   }
}

int main() {
	FastIO;
	SieveOfEratosthenes();
// 	for(auto i:pri)cout<<i<<" ";
	int nunnu;
	cin>>nunnu;
	while(nunnu--){
	    hello();
	}
	return 0;
}