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

void build(vector<int> &a,int n,int i,int j,vector<int> &t)
{
    if(i==j)t[n]=a[i];
    else
    {
        int m=(i+j)/2;



        
        build(a,n*2,i,m,t);
        build(a,n*2+1,m+1,j,t);
        t[n]=t[n*2]+t[n*2+1];

    }

}

  
int main()
{
  vector<int> a{1,2,3,4,5};
  vector<int> b(20);
  build(a,1,0,4,b);
  for(auto x:b)cout<<x<<" ";
}
