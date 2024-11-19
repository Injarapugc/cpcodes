#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
int search(vi &a,ll key)
{
    int l=0,r=a.size()-1;
    while (l<r)
    {
       
        ll mid=(l+r)/2;
        if(a[mid]<key) l=mid+1;
        if(a[mid]>=key) r=mid;
    }
    return l;
    

}
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      vi a{1,1,1,2,2,2,3,3,3};

}
