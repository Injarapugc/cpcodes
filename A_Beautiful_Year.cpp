#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    n++;
    while (true)
    {
         int a=(n%10);
         int b=(n%100)/10;
         int c=(n%1000)/100;
         int d=n/1000;
         if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) break;
         n++;
    }
    
    cout<<n<<endl;
    
  


    
}
int main()
{
  
    solve();
  
}