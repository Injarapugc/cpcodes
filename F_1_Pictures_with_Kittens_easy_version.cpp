#include <iostream>
using namespace std;
#include <bits/stdc++.h>
typedef long long ll ;
#define lup(i,a,b) for (int i=(a) ; i<(b) ; i++)
#define ld(i,a,b) for (int i=(a) ; i>=(b) ; i--)

ll mod=1e9+7, m, n  ;
int nm=1 , k , x  ;
ll a[204] , dp[204][204][204] ;

ll dfs(int i,int rem,int j)
{
    if(j==k) return -1e14 ;
    if(i==n)
    {
      if(!rem)
        return 0 ;
      return -1e14 ;
    }
    ll &ret=dp[i][rem][j] ;
    if(~ret) return ret ;
    ret=-1e14 ;
    ret=max(ret,dfs(i+1,rem,j+1)) ;
    if(rem)
    ret=max(ret,a[i]+dfs(i+1,rem-1,0)) ;
    return ret ;
}

int main()
{

   //freopen("D:\New folder\\input.txt","r",stdin) ;
   //freopen("D:\New folder\\output.txt","w",stdout) ;
   cin.tie(0);
    cin.sync_with_stdio(0);
    int t=1 ;
   // cin>> t ;
    while(t--)
    {
       cin >> n >> k >> x ;
       lup(i,0,n) cin >> a[i] ;
       memset(dp,-1,sizeof dp) ;
       ll ans=dfs(0,x,0) ;
       cout << (ans<=0 ? -1 : ans ) ;
    }

}

				 	  		 	   	    			 		