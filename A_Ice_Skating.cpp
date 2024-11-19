#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i,n,x)  for (int i = x; i < int(n); i++)
#define mod 1000000007
#define ss(a) sort(a.begin(),a.end())
/*
      "Beloved,
       never avenge yourselves,
        but leave it to the wrath of God, for it is written,
        Vengeance is mine, I will repay" - ROMAN 12:19
 */

/*
    Remeber the pain
    Remeber how worthless they made you feel
    Turn that pain into anger
    and show them who you're really are
*/

using namespace std;
const int N=1010;
int fa[N],n,x[N],y[N],ltk;
int find(int x){return fa[x]==x?fa[x]:fa[x]=find(fa[x]);}
void Union(int x,int y){
	int fax=find(x),fay=find(y);
	if(fax==fay)return;
	fa[fay]=fax;
}

void solve() {
    cin>>n;
	for(int i=1;i<=n;++i)fa[i]=i,cin>>x[i]>>y[i];
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			if(i==j)continue;
			if(x[i]==x[j]||y[i]==y[j]){
				Union(i,j);
			}
		}
	}
	for(int i=1;i<=n;++i)if(find(i)==i)++ltk;
	cout<<ltk-1;
  
    
}

  
int main()
{
  ll t=1;
  while(t--)
  {
    solve();
  }
}
