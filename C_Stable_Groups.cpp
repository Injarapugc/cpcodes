#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ll n,k,x,i;
    std::vector<ll> v;
 
    cin>>n>>k>>x;
    ll ar[n+2];
    for(i=1;i<=n;i++)
    {
        cin>>ar[i];
    }
    ll group=1;
    sort(ar+1,ar+n+1);
    for(i=2;i<=n;i++)
    {
      if(ar[i]-ar[i-1]>x)
      {
       group++;
       v.push_back(ar[i]-ar[i-1]);
      }
    }
    sort(v.begin(),v.end());
 
    ll invite_std;
    for(i=0;i<v.size();i++)
    {
        //cout<<v[i]<<" ";
       if(v[i]%x==0)
        invite_std=v[i]/x-1;
 
       else 
        invite_std=v[i]/x;
       //cout<<invite_std<<endl;
 
       if(k>=invite_std)   
       { 
        k-=invite_std;   
        group--;        
       }
    }
    cout<<group<<endl;
    return 0;
}
 