#include<bits/stdc++.h>
using namespace std;
#define l long long
void solve()
{
    l n,k;
    cin>>n>>k;
    l ans=k/(n-1);
    l r=k%(n-1);
    ans=n*ans+r;
    if(r==0) ans--;
    cout<<ans<<endl;
}
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        solve();
        /* code */
    }
    
}