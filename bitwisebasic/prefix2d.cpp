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
      vector<vector<int>> prefix(n,vector<int>(m,0));
      int a[n][m];
      for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)cin>>a[i][j];
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
            prefix[i][j]=a[i][j];
            if(i>0)
            {
                prefix[i][j]+=prefix[i-1][j];
            }
            if(j>0)
            {
                prefix[i][j]+=prefix[i][j-1];
            }
            if(i>0&&j>0)
            {
                prefix[i][j]-=prefix[i-1][j-1];
            }
        }
      }


}
