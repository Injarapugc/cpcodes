#include<iostream>
#include<algorithm>
using namespace std;
const int M=2e5+5;
char mp[3][M];
typedef long long ll;
ll dp[3][M];
int main(){
    int t; cin>>t;
    while(t--){
        int m; cin>>m;
        int cnt=0;
        
        for(int i=1;i<=2;i++){
            for(int j=1;j<=m;j++){
                cin>>mp[i][j];
                if(mp[i][j]=='B'){
                    dp[i][j]=1;
                    cnt++;
                }
                else dp[i][j]=-1e18;
            }
        }
        dp[1][0]=dp[2][0]=0;
        for(int i=1;i<=m;i++){
            ll  a=dp[1][i];
            ll b=dp[2][i];
            dp[1][i]=max(dp[1][i]+dp[1][i-1],dp[1][i]+b+dp[2][i-1]);
            dp[2][i]=max(dp[2][i]+dp[2][i-1],dp[2][i]+a+dp[1][i-1]);
        }
        if(dp[1][m]==cnt||dp[2][m]==cnt){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
			    	   		  	     			 						