#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll a,b;cin>>a>>b;
        if(a==1)cout<<1<<endl;
        else
        {
            while(a!=b)
            {
                if(a>b)a-=b;
                else b-=a;
            }
            cout<<a<<endl;
        }
    }
    
}
