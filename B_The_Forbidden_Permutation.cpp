#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, m, d, ans, i, j, move;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n>>m>>d;
        ans=1000000;
        
        ll pos[n+1];
        
        ll a[m];
        
        for(i=1; i<=n; i++)
        {
            cin>>j;
            pos[j]=i;
        }
        
        for(i=0; i<m; i++)
        {
            cin>>a[i];
        }
        
        for(i=0; i<m-1; i++)
        {
            if(pos[a[i]]>pos[a[i+1]]){
                ans=0;
                break;
            }else if(pos[a[i]]+d<pos[a[i+1]]){
                ans=0;
                break;
            }else{
                move=d+1-(pos[a[i+1]]-pos[a[i]]);
                
                if(move<=(pos[a[i]]-1+n-pos[a[i+1]])){
                    ans=min(ans, move);
                }
                
                ans=min(ans, pos[a[i+1]]-pos[a[i]]);
            }
        }
        cout<<ans<<"\n";
    }
}