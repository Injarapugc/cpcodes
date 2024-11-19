#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i,n,x)  for (int i = x; i < int(n); i++)
#define mod 1000000007
using namespace std;

void solve()
{
    string s1,s2;
    cin>>s1>>s2;
    int i1=s1[0]-'a',j1=s1[1]-'1',i2=s2[0]-'a',j2=s2[1]-'1';
    int r[]={-2,-2,2,2,-1,-1,1,1};
    int c[]={1,-1,1,-1,-2,2,-2,2};
    queue<pair<int,int>> q;
    q.push({i1,j1});
    int l[8][8]={};
    while (!q.empty())
    {
        int i=q.front().first,j=q.front().second;
        q.pop();
        if(i==i2&&j==j2){cout<<l[i][j]<<endl;
          break;}
        for(int k=0;k<8;k++)
        {
            int x1=r[k]+i;
            int x2=c[k]+j;
            if(x1>=0&&x1<=7&&x2<=7&&!l[x1][x2]&&x2>=0)
            {
                l[x1][x2]=l[i][j]+1;
                q.push({x1,x2});
            }
        }

        /* code */
    }
    

}
  
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    solve();
  }
}