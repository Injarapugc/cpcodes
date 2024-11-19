#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef map<int,int> m;
int min=INT_MAX;
signed main()
{
   int n,q;cin>>n>>q;
   int a[n+1];
   for(int i=1;i<=n;i++ )cin>>a[i];
   int s[n+1]={0};
   for(int i=1;i<=q;i++)
   {
       int x,y;cin>>x>>y;
       y++;
       s[x]++;
       s[y]--;
   }
   for(int i=1;i<=n;i++)s[i]+=s[i-1];
   sort(s,s+n);
   sort(a,a+n);
   int ans=0;
   for(int i=1;i<=n;i++)
   {
      ans+=a[i]*s[i];
   }
   cout<<ans<<endl;
}
