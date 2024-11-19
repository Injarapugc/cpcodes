#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define read(arr,n) int arr[n]; for(int i=0;i<n;i++)cin>>arr[i];

int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      ll a[3] {0};
      ll n;cin>>n;
      while(n--)
     {
        char a1;cin>>a1;
        if(a1=='P')a[0]+=1;
        else if(a1=='H')a[1]+=1;
        else a[2]+=1;
     }
     sort(a,a+3);
     cout<<a[2]+a[1]<<endl;


}
