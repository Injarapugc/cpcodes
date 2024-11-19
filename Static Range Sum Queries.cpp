#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
signed main()
{
    int n,q;cin>>n>>q;
    vi v(n+2);
    vi s(n+2,0);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        s[i]+=s[i-1]+v[i];
    }
     while(q--)
    {
        int x,y;cin>>x>>y;
        x--;
        cout<<s[y]-s[x]<<endl;

    }
 

    


}
