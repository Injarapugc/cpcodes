#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for (int i = 0; i < n; i++)
#define ford(i, n) for (int i = n; i >= 0; i--)
#define fore(i, b, n) for (int i = b; i < n; i++)
#define pb push_back
#define f first
#define s second
#define all(_) (_).begin(), (_).end()
#define srt(a) sort(all(a))
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef unsigned long long int ulli;
typedef vector<ll> vll;
typedef vector<ii> vii;

const ll INF = 2e18;

void solve() {
  int n, m;
  cin>>n>>m;

  char grid[n][m];
  int vis[n][m];

  forn(i, n) {
    forn(j, m) {
      cin>>grid[i][j];
      vis[i][j] = 0;
    }
  }

  forn(a, n) {
    forn(b, m) {
      if(grid[a][b] != '.') continue;
      if(vis[a][b]) continue;

      queue<ii> q;
      q.push({a, b});
      vis[a][b] = 1;
      grid[a][b] = 'B';

      while(!q.empty()) {
        ii v = q.front();
        q.pop();
        char c = grid[v.f][v.s];
        int di[] = {0, 1, 0, -1};
        int dj[] = {1, 0, -1, 0};
        forn(k, 4) {
          int i = v.f + di[k];
          int j = v.s + dj[k];
          if(i >= 0 && i < n && j >= 0 && j < m) {
            if(grid[i][j] == '.' && !vis[i][j]) {
              vis[i][j] = 1;
              grid[i][j] = c == 'W' ? 'B' : 'W';
              q.push({i, j});
            }
          }
        }
      }
    }
  }

  forn(i, n) {
    forn(j, m) {
      cout<<grid[i][j];
    }
    cout<<endl;
  }
}

int main() {
  fast;
  int T = 1;
  //cin>>T;
  while(T--) {
    solve();
  }
  return 0;
}
			     			 			  	  			  	   	