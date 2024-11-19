#include<bits/stdc++.h>
using namespace std;
int t,a,b,n;
int dp[100005];
char s[100005];
void Find(int &p) {
	for(int i=1; i<=n; i++) {
		if(s[i]=='1') {
			p=i;
			dp[i]=a;
			return;
		}
	}
}
int main() {
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d",&a,&b);
		scanf("%s",s+1);
		n=strlen(s+1);
		fill(dp+1,dp+1+n,0);
		int now;
		Find(now);
		for(int i=0;i<n;i++)cout<<dp[i]<<" ";
		
        
		for(int i=now+1; i<=n; i++) {
			if(s[i]=='0') dp[i]=dp[i-1];
			else {
				dp[i]=dp[now]+min(a,(i-now-1)*b);
				now=i;
			}
		}
		printf("%d\n",dp[n]);
	}
	return 0;
}
	 	  	 	  	  	 		  			 		  	 		