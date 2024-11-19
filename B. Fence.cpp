#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

signed main()
{
    int n,k;cin>>n>>k;
    vi v(n+2);
    for(int i=0;i<n;i++)cin>>v[i];
    int min=INT_MAX;
    int index=0;
    int sum=accumulate(v.begin(),v.begin()+k,0);
    for(int i=k;i<n;i++)
    {
        sum+=v[i]-v[i-k];
        if(sum<min)
        {
            min=sum;
            index=i;
        }
    }
    cout<<index;

    

}
