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
      int t;cin>>t;
      while(t--)
      {
        ll n;cin>>n;
        string a;
        cin>>a;
        ll ans=0;
        int j=n-1;
        for(int i=0;i<=n/2;i++,j--)
        {
            if(a[i]!=a[j])ans++;
        }
        ll ans2=n/2;
        ans2--;
        cout<<min(ans,ans2);
      }

}
