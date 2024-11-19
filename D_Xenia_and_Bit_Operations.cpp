/**
 *        Bismillahir Rahmanir Rahim
 *        Author:  Ashfak Hossain Evan, American International University, Bangladesh
 **/
#include <bits/stdc++.h>

#ifdef BERLIN
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

using namespace std;

#define endl '\n'
#define ll long long
const int N = (1 << 17) + 9;

int t[N << 2];
int a[N];
struct SegTree {
  #define lc (n << 1)
  #define rc ((n << 1) + 1)
  
  static const int inf = 1e9;
  
  SegTree() {
    memset(t, 0, sizeof t);
  }

  inline void pull(int n, int len) { 
    int p = log2(len);
    if(p & 1) {
      t[n] = t[lc] | t[rc];
    }else {
      t[n] = t[lc] ^ t[rc];
    }
  }

  void build(int n, int b, int e) {
    if (b == e) {
      t[n] = a[b];
      return;
    }
    int mid = (b + e) >> 1;
    build(lc, b, mid);
    build(rc, mid + 1, e);
    pull(n, (e - b) + 1);
  }

  void update(int n, int b, int e, int i, int x) {
    if (b > i || e < i) return;
    if (b == e && b == i) {
      t[n] = x; 
      return;
    }
    int mid = (b + e) >> 1;
    update(lc, b, mid, i, x);
    update(rc, mid + 1, e, i, x);
    pull(n, (e - b) + 1);
  }
}tree;


void Free_Palestine() {
  int n, q;
  cin >> n >> q;
  n = 1 << n;
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  tree.build(1, 1, n);

  while(q--) {
    int i, j;
    cin >> i >> j;
    tree.update(1, 1, n, i, j);
    cout << t[1] << endl;
  }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  Free_Palestine();

  return 0;
}
	    	 	  		    		   	 					  	