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
bool prime(ll a)
{
    if(a<=1)return false;
    for(ll i=2;i*i<=a;i++)
    {
        if(a%i==0)return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      ll t;cin>>t;
      while (t--)
      {
        ll n;cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll ans=1;
        for(ll i=0;i<n-1;i++)
        {
            ans=max(ans,__gcd(a[i],a[i+1]));

        }
        if(ans==1)cout<<0<<endl;
        else
        {
            for(ll i=n;i>=2;i--)
            {
                if(prime(i))
                {
                    if(a[i]%i==0)
                    {
                        cout<<n-i+1<<endl;
                        break;
                    }
                }

            }
        }



        
      }
      

}
