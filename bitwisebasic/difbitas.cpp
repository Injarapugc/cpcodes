#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
int solve()
{
    int n,m;
    cin>>n>>m;
   
    int ans=0;
    int x=log2(n)+1;
    int y=log2(m)+1;
    bitset<32> a(n),b(m);
    for(int i=0;i<x||i<y;i++)
    {
        
       if(a[i]!=b[i]) ans++;
    }
    return ans;
}
  

int main()
{
  
    cout<<solve();
}