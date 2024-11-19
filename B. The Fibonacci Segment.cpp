#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    int a1,a2;cin>>a1>>a2;
    int s=a1+a2;
    int l=2,ml=0;
    for(int i=0;i<n-2;i++)
    {
        int b;cin>>b;
        if(b==s)
        {
            l++;
            s=a[i-1]+a[i-2];
        }
        else{
            l=2;
        }
        ml=max(l,ml);

    }
    cout<<ml<<endl;

}