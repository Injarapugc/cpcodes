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
ll powermod(ll x, ll y, ll p){ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}
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
        ll n,m;
        cin>>n>>m;
        ll c=0;
        if(isPowerOfTwo(m))cout<<powermod(n,ceil(log2(m)),mod)<<endl;
        else 
        {
            
            while(m>0)
            {
                if(m==1)
                {
                    c+=1;
                    m=0;
                }
                else if(m==2)
                {
                    c+=(n%mod);
                    m=0;
                }
                else if(m==3)
                {
                    c+=((n+1)%mod);
                    m=0;
                }
                else if(isPowerOfTwo(m))
                {
                    c+=powermod(n,ceil(log2(m)),mod);
                    m=0;
                }
                else
                {
                    ll x=pow(2,floor(log2(m)));
                      c+=powermod(n,floor(log2(m)),mod);
                      m=m-x;
                }
            }
            cout<<c%mod<<endl;
        }

    }
    return 0;
}