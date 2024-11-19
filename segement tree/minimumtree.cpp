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
int n=1e4;
vi a(n),t(n*4);
void build(int i,int j,int n)
{
    if(i==j)t[n]=a[i];
    else
    {
        int m=(i+j)/2;
        build(i,m,n*2);
        build(m+1,j,n*2+1);
        t[n]=min(t[n*2],t[n*2+1]);
    }
}
int ran(int i,int j,int a,int b,int n)
{
    if(a>b) return 1e9;
    if(i==a and j==b) return t[n];
    int m=(i+j)/2;
    return min(ran(i,m,a,min(b,m),n*2),ran(m+1,b,max(m+1,a),b,n*2+1));
}
int main()
{
    int k;
    cin>>k;
    fo(i,k)cin>>a[i];
    build(0,k-1,1);
    cout<<ran(0,3,1,3,1);
 
}
