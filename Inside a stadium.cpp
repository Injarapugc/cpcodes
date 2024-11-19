#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define read(arr,n) int arr[n]; for(int i=0;i<n;i++)cin>>arr[i];
ll M=1e9+10;
int as(int a,int b)
{
  return(a%M+b%M)%M;
}
int mu(int a,int b)
{
    return((a%M)*(b%M))%M;
}
int su(int a,int b)
{
    return((a%M-b%M)%M+M)%M;
}

int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      ll t;cin>>t;
      while(t--)
      {
        ll n;cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)cin>>a[i];
        ll s[n+1] {0};
        ll j=1;
        ll sum=0;
        for(ll i=1;i<=n;i++)
        {
            s[i]+=s[i-1]+a[i-1];
            if(s[i]==j)sum+=1;
            j++;

        }
        cout<<sum<<endl;
      }

}
