#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
#define mod 1000000007
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
bool isPrime(int n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}
int moduloMultiplication(int a,int b)
{
    return((a)*1LL*(b))%mod;
}
ll binexp(int a,ll b)
{
    if(b==0) return 1;
    if(b<0) return binexp(1/a,(-1)*b);
    ll res=binexp(a,b/2);
    if(b&1) return(a*(res*res)%mod)%mod;
    else return(res*res)%mod;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   int n;
    cin>>n;
    long long odd=binexp(4,n/2);
    long long even=binexp(5,n/2+n%2);
    cout<<moduloMultiplication(odd,even);
        return 0;
}