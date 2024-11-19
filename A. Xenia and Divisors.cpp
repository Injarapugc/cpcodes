#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;cin>>n;
    int a[n];
    map<int,int> v;
    int aa=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        v[a[i]]++;
    }
    for(auto i:v)
    {
        int b=n/3;
        if(i.second>b)
        {
            aa=1;
            break;
        }
    }
    if(aa==1)cout<<-1<<endl;
    else
    {

        
    }


}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int m,l;
        m=l=INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]-a[i-1]>0)
            {
                l=a[i]-a[i-1];
            }
            m=max(m,l);
        }
        if(m>0)cout<<m<<endl;
        else cout<<"UNFIT"<<endl;
    }
}