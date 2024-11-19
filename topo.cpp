#include<bits/stdc++.h>

using namespace std;
using pii = pair<int,int>;


void floyd(vector<vector<int>>&weights,int n){
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(weights[i][k]!=INT_MAX and weights[k][j]!=INT_MAX and weights[i][k]+weights[k][j]<weights[i][j]){
                    weights[i][j] = weights[i][k]+weights[k][j];
                }
            }
        }
    }
}
void nig(vector<vector<int>>&w,int n)
{
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(w[i][k]!=1e9&&w[k][j]!=1e9&&w[i][j]>w[i][k]+w[k][j])
                w[i][j]=w[i][k]+w[k][j];
            }
        
        }
    }
}


int main(){
    int n,c;
    cin>>n>>c;
    vector<vector<pii>>adj(n);
    vector<vector<int>>weights(n,vector<int>(n,INT_MAX));
    for(int i=0;i<c;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        weights[u][v]=w;
    }
    floyd(weights,n);
    vector<int>ans;
    int p;
    cin>>p;
    bool updated=false;
    while(p--){
        int type,u,v,w;
        cin>>type;
        if(type==1){
            cin>>u>>v>>w;
            weights[u][v]=w;
            updated=true;
        }
        else{
            cin>>u>>v;
            if(updated){
                floyd(weights,n);
                updated=false;
            }
            ans.push_back(weights[u][v]);
        }
    }
    cout<<"[";
    for(int i=0;i<ans.size();i++){
        if(ans[i]==INT_MAX)ans[i]=-1;
        if(i==ans.size()-1)cout<<ans[i]<<"]";
        else cout<<ans[i]<<", ";
    }
    cout<<"\n";
    return 0;
}