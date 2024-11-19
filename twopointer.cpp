#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
vi ans(vi a,vi b,ll n1,ll n2)
{
    ll i,j,k;
    i=j=k=0;
    vi answer(n1+n2);
    while(i<=n1&&j<=n2)
    {
        if(a[i]<b[j])
        {
            answer[k]=a[i];
            i++;
            k++;
        }
        else
        {
            answer[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<=n1)
    {
        answer[k]=a[i];
        i++;
        k++;
    }
     while(j<=n2)
    {
        answer[k]=b[i];
        j++;
        k++;
    }
    return answer;
}

int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      ll n1,n2;
      cin>>n1>>n2;
      vi a (n1);
      vi b(n2);
      for(ll i=0;i<n1;i++)cin>>a[i];
      for(ll i=0;i<n2;i++)cin>>b[i];
      vi answer=ans(a,b,5,4);
      for(auto x:answer)cout<<x<<endl;

}
