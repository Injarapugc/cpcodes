#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
  ll mod=1000000007;
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
bool isPrime(int n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}
ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){if (b & 1)res = (res + a) % mod;b >>= 1;}return res;}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=-1;
        ll a[n];
        ll ind;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(ans<=a[i])
            {
                ans=a[i];
                ind=i;
            }
        }
        ll riz=0;
        ll ew=a[n-1];
        for(ll i=n-2;i>=0;i--)
        {
            if(a[i]==ans) 
            {
                break;
            }
            if(ew<a[i])
            {
                riz++;
                ew=a[i];
            }


        }
        if(a[n-1]==ans)cout<<0<<endl;
        else cout<<abs(riz)+1<<endl;
    }
    return 0;
}