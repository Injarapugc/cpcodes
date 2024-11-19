#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
int binary(int l,int h,int t,vector<int>&a)
{
    int m=(l+h)/2;
    if(t==a[m]) return m;
    else if(t>a[m]) binary(m,h,t,a);
    else binary(m,h,t,a);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> a;
    int n;cin>>n;
    int t;cin>>t;
    set<int> a1;
    for(int i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++)
    {
        a1.insert(a[i]);
    }
    int i=0,r;
    for(int i=0;i<n;i++)
    {
        if(a[i]>t)
        {
            r=i;
            break;
        }
    }
    int j=0;
    for(auto x:a1)
    {
        int ans=t-x;
        auto it=a1.find(ans);
        if(it!=a1.end())
        {
            break;
        }
        j++;
    }
    int ans=t-a[j];
    int last=binary(0,a.size(),ans,a);
    cout<<j<<" "<<last<<endl;
}