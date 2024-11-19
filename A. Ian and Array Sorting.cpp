  #include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define read(arr,n) int arr[n]; for(int i=0;i<n;i++)cin>>arr[i];
ll M=1e9+10;
vi prime(M, false);
void seive()
{
    prime[0]=prime[1]=true;
    for(ll i=2;i*i<=M;i++)
    {
        if(prime[i]==false)
        {
            for(ll j=i;j<=M;j+=i)
            {
                prime[j]=true;
            }
        }
       
    }
}

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
        ll j=0;
        for(ll i=1;i<n-1;i++)
        {
            if(a[i]>a[i-1]&&a[i]>a[i+1])
            {
                j=1;
                break;
            }
        }
        if(j==0)cout<<"YES\n";
        else cout<<"NO\n";
        
      }
   
      

}
