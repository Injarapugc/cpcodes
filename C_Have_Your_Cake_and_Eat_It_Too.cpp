#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=2e5+5;
ll n,t;
ll s[6];
ll a[N],b[N],c[N];
bool solve(ll a[],ll b[],ll c[])
{
    s[0]=1,s[1]=1;
    while(s[1]<n-1&&a[s[1]]<t) s[1]++;
    if(s[1]==n-1) return 0;
    s[2]=s[1]+1,s[3]=s[1]+1;
    while(s[3]<n&&(b[s[3]]-b[s[1]])<t) s[3]++;
    if(s[3]==n) return 0;
    if(c[n]-c[s[3]]<t) return 0;
    s[4]=s[3]+1;
    s[5]=n;
    return true;
}
int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            ll x;
            cin>>a[i];
            a[i]+=a[i-1];
        }
        for(int i=1;i<=n;i++)
        {
            ll x;
            cin>>b[i];
            b[i]+=b[i-1];
        }
        for(int i=1;i<=n;i++)
        {
            ll x;
            cin>>c[i];
            c[i]+=c[i-1];
        }
        t=(a[n]+2)/3;
        if(solve(a,b,c))
        {
            cout<<s[0]<<" "<<s[1]<<" "<<s[2]<<" "<<s[3]<<" "<<s[4]<<" "<<s[5]<<endl;
            continue;
            
        }
        if(solve(a,c,b))
        {
            cout<<s[0]<<" "<<s[1]<<" "<<s[4]<<" "<<s[5]<<" "<<s[2]<<" "<<s[3]<<endl;
            continue;
        }
        if(solve(b,a,c))
        {
             cout<<s[2]<<" "<<s[3]<<" "<<s[0]<<" "<<s[1]<<" "<<s[4]<<" "<<s[5]<<endl;
            continue;

        }
        if(solve(b,c,a))
        {
             cout<<s[4]<<" "<<s[5]<<" "<<s[0]<<" "<<s[1]<<" "<<s[2]<<" "<<s[3]<<endl;
            continue;
        }
        if(solve(c,a,b))
        {
             cout<<s[2]<<" "<<s[3]<<" "<<s[4]<<" "<<s[5]<<" "<<s[0]<<" "<<s[1]<<endl;
            continue;
        }
        if(solve(c,b,a))
        {
             cout<<s[4]<<" "<<s[5]<<" "<<s[2]<<" "<<s[3]<<" "<<s[0]<<" "<<s[1]<<endl;
            continue;
        }
        cout<<-1<<endl;
    }
}