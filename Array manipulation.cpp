#include<bits/stdc++.h>
using namespace std;
#define int long long

int min=INT_MAX;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
signed main()
{
    int n,q;cin>>n>>q;
    vi s(n+2,0);
    while(q--)
    {
        int l,r;cin>>l>>r;
        int v;cin>>v;
        l--;
        s[l]+=v;
        s[r]-=v;
    }
    int max=-1e9;
    for(int i=1;i<=n;i++){
        s[i]+=s[i-1];
        if(max<s[i])max=s[i];
    }
    cout<<max<<endl;
}
