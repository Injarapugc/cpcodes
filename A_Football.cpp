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
    pair<string,int> a[2];
    ll n;
    cin>>n;
    string a1;
    cin>>a1;
    a[0].first=a1;
    a[0].second+=1;
    n-=1;
    while(n--)
    {
        string s;
        cin>>s;
        if(s==a[0].first)
        {
            a[0].second+=1;
        }
        else
        {
            a[1].first=s;
            a[1].second++;
        }
    }
    if(a[0].second>a[1].second)cout<<a[0].first<<endl;
    else cout<<a[1].first<<endl;
    return 0;
}