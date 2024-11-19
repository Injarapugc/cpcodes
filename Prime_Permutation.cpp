#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
const int N=1e5+10; 
vector<bool> prime(N,true);
void seive()
{
    prime[0]=prime[1]=false;
    for(int i=2;i<N;i++)
    {
        if(prime[i])
        {
            for(int j=2*i;j<N;j+=i)
            prime[j]=false;
        }
    }
}
void solve()
{
    int n;
    cin>>n;
    if(n<=2)
    {
        cout<<-1<<endl;
        return;
    }
    vector<int> a;
    int j=0;
    for(int i=2;i<=n;i++)
    {
        if(prime[i])
        {
            j++;
            a.push_back(i);

        }
    }
    a.resize(j);
    int ans;
    if(j<=2)
    {
        ans=a[0];
    }
    else ans=a[j/2];
    int k=j/2;
    j--;
    for(int i=1;i<=n;i++)
    {
        if(ans+i>n)
        {
             if(ans-i==0)
             {
                ans=a[--k];
             }
              cout<<abs(ans-i)<<" ";
        }
        else cout<<ans+i<<" "; 
    }
    cout<<endl;

}

int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      seive();
      int n;
      cin>>n;
      while(n--)
      {
        solve();
      }

}
