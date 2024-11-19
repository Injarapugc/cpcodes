#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;

int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      int n;cin>>n;
      int a[n];
      for(int i=0;i<n;i++)cin>>a[i];
      int i;
      i=0;
      while(i<n-1)
      {
        int ans=a[i]^a[i+1];
        if(ans!=0)
        {
            cout<<a[i];
            break;
        }
        else i+=2;
      }

}
