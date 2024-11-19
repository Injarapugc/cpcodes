#include<bits/stdc++.h>
using namespace std;
#define ll long long 
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (ll i = 0; i < int(n); i++)
#define fi(i,n,x)  for (ll i = x; i < int(n); i++)
#define mod 1000000007
using namespace std;



  
int main()
{
     ll n,m;
    cin>>n>>m;
    map<ll,ll> a;
    ll s=0;
    for(ll i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        a[i]=x;
        s+=x;
    }
    int p=0;
    fi(i,m,0)
    {
        int x1;
        cin>>x1;
        if(x1==1)
        {
            int x2,x3;
            cin>>x2>>x3;
            if(a[x2])
            {
                s-=a[x2];
                s+=x3;
                a[x2]=x3;

            }
            else
            {
                s-=p;
                s+=x3;
                a[x2]=x3;
            }
            cout<<s<<endl;
        }
        else
        {
            cin>>p;
            s=n*p;
            a.clear();
            cout<<s<<endl;



        }
        
    }
}