#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
int check(int a)
{
    int ans=a;
    while(ans>0)
    {
        ll di=ans%10;
        if(ans%di==0)return false;
        ans=ans/10;
    }
    return true;

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
        ll n;
        cin>>n;
       string s1=" ";
        for(ll i=0;i<n;i++)
        {
            if(i==n-1)s1+='3';
            else s1+='2';
        }
        ll ans;
        ans=stoi(s1);
        if(n==-1)
        {
            cout<<-1<<endl;
            return;
        }
        else
        {
            while(!check(ans))
            {
                ans+=1;

            }
            cout<<ans<<endl;
        }

    }

    return 0;
}