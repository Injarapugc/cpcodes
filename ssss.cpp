#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &x:a)cin>>x;
    int ans=1;
    int j=0;
    int s;cin>>s;
    int s1=0;
    for(int i=0;i<n;i++)
    {
        s1+=a[i];
        while(s1>s)
        {
            s1-=a[j];
            j++;
        }
        ans=max(ans,(i-j)+1);
    }
    cout<<ans;
}