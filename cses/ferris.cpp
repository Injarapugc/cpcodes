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
      ll n,k;cin>>n>>k;
      ll s=0;
      vi a(n+1);
      for(ll i=0;i<n;i++)cin>>a[i];
      a[n]=INT_MAX;
      sort(a.begin(),a.end());
      ll i=0,j=1;
      ll prev;
      ll prev1;
      while(i<n)
      {
        if(a[i]+a[j]<=k)
        {
          prev=j;
          j++;
            
        }
        else if(a[i]>k)
        {
          if(i==0)s+=1;
          
          break;
        }
        else
        {
          j=prev+1;
          i++;
          s++;
          prev1=i;
        }

      }
      ll siz=n-(s*2);
      cout<<siz+s<<endl;
      

}
