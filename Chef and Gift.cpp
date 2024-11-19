#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        int n,k;cin>>n>>k;
        int ans=0;
        int t=0;
        vi a(n);
        while(n--)
        {
            int x;cin>>x;
            a.push_back(x);
        }
       for(int i=0;i<=n;i++)
       {
           if(a[i]%2==0)ans++;
           else ans=0;
           if(ans==k)
           {
            t=1;
            break;
           }
       }
       if(t==1)cout<<"YES\n";
       else cout<<"NO\n";
    }
   
}
