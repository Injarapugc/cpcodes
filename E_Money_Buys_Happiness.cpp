#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int t;
int n,x,sum;
ll dp[50005];
int c[50005];
int h[50005];
//shouldlearngain
int main(){
	cin >> t;
	while(t--){
		sum=0;
		cin >> n >> x;
		for(int i=1;i<=n;i++){
			cin >> c[i] >> h[i];
			sum+=h[i];
		}
		for(int i=1;i<=sum;i++) dp[i]=-1;
		dp[0]=0;
		for(int i=1;i<=n;i++){
			for(int j=sum;j>=h[i];j--){
				if(dp[j-h[i]]-c[i]>=0)
                {
                  

                     dp[j]=max(dp[j],dp[j-h[i]]-c[i]),dp[j]+=x;
                     
                }
				else if(dp[j]>=0) dp[j]+=x;
                
            
			}
			for(int j=h[i]-1;j>=0;j-- )
            {
                if(dp[j]>=0)
                {
                    dp[j]+=x;
                  
                    
                }
            }
		}
		for(int i=sum;i>=0;i--){
			if(dp[i]>=0){
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
} 