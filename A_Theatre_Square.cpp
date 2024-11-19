#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
int ans(int a,int n)
{
    if(a%n==0) return(a/n);
    else return(a/n)+1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m,a;
    cin>>n>>m>>a;
    ll r,c;
    if(a>n&&a>m)cout<<1<<endl;
    else
    {
        r=ans(n,a);
        c=ans(m,a);
        if(r==0)cout<<c;
        else if(c==0)cout<<r;
        else cout<<r*c;
    }

    return 0;
}