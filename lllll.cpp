#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int s=a[0];
    int ans=0;
    for(int i=1;i<n;i++)
    {
        s+=a[i];
        if(s<0)
        {
            ans+=abs(s)+1;
            s=1;

        }
    }
    cout<<ans<<endl;


}