#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pii pair<int,int>

const int N = 1000000+5;
int a[N];
int t[4*N]; 

void build(int n, int b, int e){
    if(b == e){
        t[n] = 0;
        return;
    }
    int lc = 2 * n, rc = 2 * n + 1;
    int mid = (b + e) / 2;
    build(lc, b, mid);
    build(rc, mid + 1, e);
    t[n] = t[lc] + t[rc];
}
void incr(int n, int b, int e, int x){
    if(b > x || e < x) return;
    if(b == e){
        t[n]++;
        return;
    }
    int mid = (b + e) / 2;
    int lc = 2 * n, rc = 2 * n + 1;
    incr(lc, b, mid, x);
    incr(rc, mid + 1, e, x);
    t[n] = t[lc] + t[rc];
}
int query(int n, int b, int e, int i, int j){
    if(b > j || e < i) return 0;
    if(b >= i and e <= j) return t[n];
    int lc = 2 * n, rc = 2 * n + 1;
    int mid = (b + e) / 2;
    return query(lc, b, mid, i, j) + query(rc, mid + 1, e, i, j);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m; cin >> n ;
    build(1, 1, n);
    vector<pii> vp;
    vp.push_back({0,0});
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        vp.push_back({a[i], i});
    }
    sort(vp.begin(),vp.end());
    for(int i = 1; i <= n; i++){
        a[vp[i].second] = i;
    }
    ll inv1[n + 1], inv2[n + 1];
    for(int i = 1; i <= n; i++){
        int cnt = query(1, 1, n, 1, a[i]-1);
        incr(1, 1, n, a[i]);
        inv1[i] = 1ll * cnt;
    }
        for(int i=1;i<=n;i++)
        {
            cout<<inv1[i]<<" "<<a[i]<<"\n";
        }
}
  			  	    	  	  	 			   					