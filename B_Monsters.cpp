
/*
 *                                                     __----~~~~~~~~~~~------___
 *                                    .  .   ~~//====......          __--~ ~~
 *                    -.            \_|//     |||\\  ~~~~~~::::... /~
 *                 ___-==_       _-~o~  \/    |||  \\            _/~~-
 *         __---~~~.==~||\=_    -_--~/_-~|-   |\\   \\        _/~
 *     _-~~     .=~    |  \\-_    '-~7  /-   /  ||    \      /
 *   .~       .~       |   \\ -_    /  /-   /   ||      \   /
 *  /  ____  /         |     \\ ~-_/  /|- _/   .||       \ /
 *  |~~    ~~|--~~~~--_ \     ~==-/   | \~--===~~        .\
 *           '         ~-|      /|    |-~\~~       __--~~
 *                       |-~~-_/ |    |   ~\_   _-~            /\
 *                            /  \     \__   \/~                \__
 *                        _--~ _/ | .-~~____--~-/                  ~~==.
 *                       ((->/~   '.|||' -_|    ~~-/ ,              . _||
 *                                  -_     ~\      ~~---l__i__i__i--~~_/
 *                                  _-~-__   ~)  \--______________--~~
 *                                //.-~~~-~_--~- |-------~~~~~~~~
 *                                       //.-~~~--\
 *                       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *
 *                               神兽保佑            永无BUG
 */
#include<bits/stdc++.h>
using namespace std;
#define MOD         998244353
#define int         long long
#define pii         pair<int,int>
#define all(v)      v.begin(),v.end()
#define pb          push_back
#define lb          lower_bound
#define ub          upper_bound
#define Sort(n)     sort(all(n),cmp)
#define REP(i,b,e)  for(int i=(b);i<(e);++i)
#define over(x)     {cout<<x<<endl;return;}
#define rf(v)       shuffle(all(v),sd);
int qpow (int a,int b,int m=MOD,int res=1){
	a%=m;
	while(b>0)res=(b&1)?(res*a%m):(res),a=a*a%m,b>>=1;
	return res;
}
string YN(bool x,string Y="Yes",string N="No") {
	if(x){
		return Y;
	} else {
		return N;
	}
}
int fac[2000005],inv[2000005];
void init(int n){
	fac[0]=inv[0]=1;
	REP(i,1,n+1)fac[i]=fac[i-1]*i%MOD;
	inv[n]=qpow(fac[n],MOD-2);
	for(int i=n-1;i>=1;--i)inv[i]=inv[i+1]*(i+1)%MOD;
}
int binom(int x,int y){
	return x<y||y<0? 0:fac[x]*inv[y]%MOD*inv[x-y]%MOD;
}
struct node{
	int va;int num;
};
bool cmp(const node&x,const node &y){
	if(x.va != y.va)
		return x.va>y.va;
	return x.num < y.num;
}


int nb;
node a[300010];
node b[300010];
node c[300010];

void Main() {
	int n,k;cin>>n>>k;
	
	int cdb = 0;
	int cdc = 0;
	
	REP(i,1,n+1){
		cin>>a[i].va,a[i].num = i;
		a[i].va = a[i].va%k;
		if(a[i].va == 0){
			b[++cdb].num = i;
		}
		else
			c[++cdc].num = i,c[cdc].va = a[i].va;	
	} 
	
	sort(c+1,c+1+cdc,cmp);
//	
//	cout<<cdb<<" "<<cdc<<endl;
	
	REP(i,1,cdb+1)
		cout<<b[i].num<<" ";
	REP(i,1,cdc+1){
		cout<<c[i].num<<" ";
	}
	cout<<endl;
}
void TC() {
	int tc=1;
	cin>>tc;
	while(tc--) {
		Main();
		cout.flush();
	}
}
signed main() {
	return cin.tie(0),cout.tie(0),ios::sync_with_stdio(0),TC(),0;
}
		 	  	 	 	 	    				 	
