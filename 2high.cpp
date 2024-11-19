#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll a[10]={1,2,3,9,7,4,122,45,9,100};
    ll ind;
    ll temp=a[0];
    for(ll i=1;i<10;i++)
    {
        if(temp<a[i])
        {
            temp=a[i];
            ind=i;
        }
    }
    a[ind]=-100;
    temp=a[0];
    for(ll i=1;i<10;i++)
    {
        if(temp<a[i])
        {
            temp=a[i];
            ind=i;
        }
    }
    cout<<temp<<endl;

    return 0;
}