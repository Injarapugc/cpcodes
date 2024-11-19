#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{
    priority_queue<int> a;
    int n,k;
    cin>>n>>k;
    while (n--)
    {
        int x;
        cin>>x;
        a.push(x);
    }
    while (k--)
    {
        int x=a.top();
        x=sqrt(x);
        a.pop();
        a.push(x);
    }
    int s=0;
    while (!a.empty())
    {
        s+=a.top();
        a.pop();
    }
    cout<<s<<endl;
    
    
    
    
  


    
}
int main()
{
  ll t=1;
  while(t--)
  {
    solve();
  }
}