#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
int min=INT_MAX;
signed main()
{
    int n,k;cin>>n>>k;
    vi a(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    int p=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==a[i-1])continue;
        if(a[i]>n)break;
        for(int j=i+1;j<=n;j++)
        {
            if(abs(a[i]-a[j]==k))
            {
                p++;
                break;
            }
            if(a[i]-a[j]>k)break;

        }
    }
    cout<<p<<endl;




}
