#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    int f=2*max(a[0],m-a[n-1]);
    for(int i=0;i<n-1;i++)
    {
        f=max(f,a[i+1]-a[i]);
    }
    printf("%.10f\n",f/2.);


    
}
int main()
{
 
    solve();
}