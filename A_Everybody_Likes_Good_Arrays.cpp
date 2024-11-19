#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)cin>>a[i];
        ll s=0;
        for(ll i=0;i<n-1;i++)
        {
            if(a[i]%2==0&&a[i+1]%2==1||a[i]%2==1&&a[i+1]%2==0)continue;
            else
            {
                s++;

            }
        }
        cout<<s<<endl;

    }
    
    return 0;
}