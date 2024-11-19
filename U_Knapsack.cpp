#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;

int max(int a,int b)
{
  return (a>b?a:b);
}
ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){if (b & 1)res = (res + a) % mod;b >>= 1;}return res;}
int knap(vector<int> &weights,vector<int> &values,int w,int r)
{
  if(w==0||r==0) return 0;
  if(weights[r-1]<=w) return  max((values[r-1]+knap(weights,values,w-weights[r-1],r-1)),knap(weights,values,w,r-1));
  else if(weights[r-1]>w)
  return knap(weights,values,w,r-1);



}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,we;
    cin>>n>>we;

    vector<int> w (n);
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
      cin>>w[i];
      cin>>v[i];
    }
    cout<<knap(w,v,we,n);

    return 0;
}