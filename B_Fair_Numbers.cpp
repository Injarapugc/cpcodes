#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
bool prime(ll a)
{
    for(ll i=2;i*i<=a;i++)
    {
        if(a%i==0) return false;
    }
    return true;
}
ll sum(ll n)
{
    ll temp=n;
    set<ll> pr;
     set<ll> con;

    ll ans=1;
    while(temp>0)
    {
        ll digi=temp%10;
        if(n%digi==0)continue;
        else
        {
            if(prime(digi)==true)
            {
                pr.insert(digi);
            }
            else con.insert(digi);
        }
    }
    for(auto x:con)
    {
        for(auto i:pr)
        {
            if(x%i==0)
            {
                ans*=x;
                pr.erase(i);
                break;
            }
        }
    }
    for(auto x:pr) ans*=x;
    ll alt=n%ans;
    return(ans+alt);

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        cout<<sum(n);
    }

    return 0;
}