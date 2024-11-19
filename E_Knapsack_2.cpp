#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<int,ll> pil;
#define fi first
#define se second
#define endl '\n'
#define mp make_pair
#define pb push_back
#define all(x) x.begin(),x.end()
#define Cl(x) memset(x,0,sizeof(x))
const bool DC=0;
const ll mod=0;
const int N=0;
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll qpow(ll a,ll b,ll p=mod){ll ans=1;for(;b;b>>=1,a=a*a%p)if(b&1)ans=ans*a%p;return ans;}
void NO(){cout<<"NO\n";}
void YES(){cout<<"YES\n";}
mt19937 rnd((unsigned long long)new char);

ll n,q,w[105],v[105];
ll f[100005];

void __INIT__(){ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
void __SOLVE__(int _case){
	cin>>n>>q;
	for(ll i=1;i<=n;i++)cin>>w[i]>>v[i];
	for(ll i=1;i<=n;i++){
		for(ll j=q;j>=w[i];j--)if(f[j-w[i]]||j==w[i])f[j]=max(f[j-w[i]]+v[i],f[j]);
	}
	ll ans=0;
	for(ll i=q;i;i--)ans=max(ans,f[i]);
	cout<<ans<<endl;
}
int main(){/*freopen(".in","r",stdin);freopen(".out","w",stdout);*/__INIT__();int T;DC?cin>>T,1:T=1;for(int _CASE=1;_CASE<=T;_CASE++)__SOLVE__(_CASE);return 0;}