#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n,m,k,x,y,sum,a;
vector<int>v,s;
vector<int>b[100007];
int vis[100007];
void dfs(int s){
    x++;
    vis[s]=1;
    for(int i=0;i<b[s].size();i++){
        if(!vis[b[s][i]]){
            dfs(b[s][i]);
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m>>k;
    for(int i=0;i<k;i++){cin>>x;v.push_back(x);}
    for(int i=0;i<m;i++){
        cin>>x>>y;
        b[x].push_back(y);
        b[y].push_back(x);
    }
    for(int i=0;i<v.size();i++){
        x=0;
        dfs(v[i]);
        sum+=x;
        s.push_back(x);
    }
    y=n-sum;
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        if(i==s.size()-1)s[i]+=y;
        a+=(s[i]-1)*(s[i])/2;
    }
    cout<<a-m<<endl;
    return 0;
}
	  			   		 		 		  	 	   		 		