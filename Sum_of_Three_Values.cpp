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
    ll n;cin>>n;
    ll s;
    cin>>s;

    pair<ll,ll> a[n];
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        a[i].first=x;
        a[i].second=i+1;
    }
    sort(a,a+n);
    for(ll i=0;i<n;i++)
    {
        ll x1=s-a[i].first;
        for(ll j=i+1,k=n-1;j<k;j++)
        {
            while(a[j].first+a[k].first>x1) k--;
            if(j<k&&a[j].first+a[k].first==x1)
            {
               ll a1[3];
               a1[0]=a[i].second;
               a1[1]=a[j].second;
               a1[2]=a[k].second;
               sort(a1,a1+3);
               for(auto xx:a1)
               {
                cout<<xx<<" ";
               }
                 return 0;


            }

        }

    }
    cout<<"IMPOSSIBLE\n";
}
