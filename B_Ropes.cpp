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
    int n,k;
    cin>>n>>k;
    vi a(n);    for(int  i=0;i<n;i++)cin>>a[i];
    auto pred=[&](double j)
    {
        int s=0;
        for(int i=0;i<n;i++)
        {
            s+=a[i]/j;
        }
        return ((s>=k)||j==0);
    };
    double l=0,r=1e8;
    int lp=100;
    while(lp--)
    {
        double m=(l+r)/2;
        pred(m)?(l=m):(r=m);
    }
     cout << setprecision(20) << l << endl;
    


        return 0;
}
