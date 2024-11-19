#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
void solve(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans=0,mx=a[0];
	for(int i=1;i<n;i++){
		if((a[i-1]<0&&a[i]<0)||(a[i-1]>0&&a[i]>0)){
			mx=max(mx,a[i]);
		}else{
			ans+=mx;
			mx=a[i];
		}
	}
	ans+=mx;
	cout<<ans<<endl;
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
