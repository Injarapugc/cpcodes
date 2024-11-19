#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i,n,x)  for (int i = x; i < int(n); i++)
#define mod 1000000007
using namespace std;

ll n=1000009;
vector<int> a(n,0);
void seive()
{
    a[0]=a[1]=0;
    for(ll i=2;i*i<n;i++)
    {
        if(a[i]==0)
        {
            a[i]=1;
            for(ll j=2*i;j<n;j+=i)
            {
                a[j]=2;
            }
        }
    }
}
int main()
{
    seive();
    int N;
    cin>>N;
    int j=2;
    if(N==1)
    {
        cout<<1<<endl;
        cout<<1<<endl;
        
    }
    else if(N==2)
    {
        cout<<1<<endl;
        cout<<1<<" "<<1<<endl;
    }
    else
    {
          cout<<2<<endl;
          vi b;
    fi(i,N,0)
    {
    
       if(a[j]==0||a[j]==1)cout<<1<<" ";
       else cout<<2<<" ";
       j++;
    }
   

    }
    
}