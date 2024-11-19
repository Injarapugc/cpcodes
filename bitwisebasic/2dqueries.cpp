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
      int n,m;cin>>n>>m;
      int q;cin>>q;
      int prefix[1+n][1+m]{0};
      int a[1+n][1+m];
      for(int i=1;i<=n;i++)
       for(int j=1;j<=m;j++)cin>>a[i][j];
       for(int i=1;i<=n;i++)
       {
        for(int j=1;j<=m;j++)
          prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+a[i][j];
       }
      while(q--)
      {
        int a,b,c,d;cin>>b>>c>>d;
        cout<<prefix[c][d]-prefix[a-1][d]-prefix[c][b-1]+prefix[a-1][b-1]<<endl;
      }


}
