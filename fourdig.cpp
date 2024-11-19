#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{ 
       int num;cin>>num;  
       int temp=num;
        int a[4];
        int i=0;
        while(temp>0)
        {
            a[i]=temp%10;
            temp=temp/10;
            i++;
        }
        sort(a,a+4);
        for(ll i=0;i<4;i++)cout<<a[i]<<" ";
        cout<<endl;
        int l1,l2;
        if(a[0]==0) l1=a[3];
        else l1=a[0]+a[3]*10;
        if(a[1]==0) l2=a[2];
        else l2=a[1]+a[2]*10;
        cout<<l1+l2;
    
}
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    solve();
  }
}