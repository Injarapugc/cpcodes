#include "bits/stdc++.h"
using namespace std;
using ll=long long;
using pii=pair<int,int>;
#define size(x) ((int)x.size())
#define all(x) x.begin(),x.end() 

int N, M, K, u, v, k;
vector<int> adj[3001];

map<vector<int>, bool> jabena;

int dis[3001][3001], par[3001][3001];

vector<int> ans;

signed main() 
{ 
	for(int i = 1; i <= 3000; ++i)
		for(int j = 1; j <= 3000; j++)
			dis[i][j] = 1e9;
	
	
    ios_base::sync_with_stdio(0);cin.tie(0);
    /*   tophhh   */
    cin >> N >> M >> K;
    
    while(M--)
    	cin >> u >> v,
    	adj[v].push_back(u),
    	adj[u].push_back(v);
    
    while(K--)
    	cin >> u >> v >> k,
    	jabena[{u, v, k}] = true;
    
    queue<pii> q;
    
    
    // for(int& i : adj[1]) 
	    	// q.push({1, i}),
	    	// dis[1][v] = 1;
    
    q.push({0, 1});
    while(!q.empty()) {
    	u = q.front().first,
    	v = q.front().second;
    	
    	q.pop();
    	
    	if(v == N) {
    		cout << dis[u][v] << "\n";
    		while(v > 0) {
    			ans.push_back(v);
    			int tmp = par[u][v];
    			v = u;
    			u = tmp;
    		}
    		reverse(all(ans));
    		for(int& i : ans) cout << i << " ";
    		return 0;
    	}
    	
    	
    	for(int& w : adj[v]) 
    		if(jabena.find({u, v, w}) != jabena.end()) continue; 
    		else if(dis[u][v] + 1 < dis[v][w]) {
    			dis[v][w] = dis[u][v] + 1;
    			q.push({v, w});
    			par[v][w] = u;
    		}
    		
    	
    	
    }
    
    
    
    cout << -1;
return 0;
}
  	  		 	 		 		 			  		  	 	 		