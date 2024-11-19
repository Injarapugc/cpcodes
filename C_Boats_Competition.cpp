#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
int s(vi &a,int i,int j,int s)
{
    int c=0;
    while (i<j)
    {
        int x=a[i]+a[j];
        if(x==s)
        {
            c++;
            i++;
            j--;
        }
        if(x>s)
        {
            j--;
        }
        else i++;
    }
    return c;
    

}
void solve()
{
    int n;
    cin>>n;
    vi a(n);
    map<int,int> ans;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        ans[a[i]]++;
    }
    int m=0;
    for(int i=2;i<=100;i++)
    {
        int t=0;
        for(auto j:ans)
        {
            int k=i-j.first;
            if(k>=1&&ans.count(k))
            {
                t+=min(j.second,ans[k]);
            }
        }
        t=t/2;
        m=max(m,t);
    }
    cout<<m<<endl;

}
void solve1()
{
    int n;
    cin>>n;
    vi a(n);
    for(auto &x:a)cin>>x;
    vi ans(101);
    for(int i=2;i<=100;i++)
    {
        ans[i]=s(a,0,n-1,i);
    }
    int m=-1;
    for(int i=2;i<=100;i++)
    {
        if(m<ans[i])m=ans[i];
    }
    cout<<m<<endl;
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