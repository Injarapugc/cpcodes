#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define read(arr,n) int arr[n]; for(int i=0;i<n;i++)cin>>arr[i];
ll n=1000000007;
vector<bool> a(n,true);
void seive()
{
    a[0]=a[1]=false;
    for(ll i=2;i*i<n;i++)
    {
        if(a[i])
        {
            for(ll j=2*i;j<=n;j+=i)
            {
                a[j]=false;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      seive();
      for(ll i=1;i<n;i++)if(a[i])cout<<i<<endl;

}
