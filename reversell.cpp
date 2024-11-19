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
struct nig{
    int d;
    nig *next;
    nig (int x)
    {
        d=x;
        next=NULL;
    }

};
void solve()
{
    nig *g=new nig(2);
    nig *f=new nig(3);
    nig *s=new nig(4);
    g->next=f;
    f->next=s;
    nig *cur=g,*prev=NULL,*net;
    while(cur!=NULL)
    {
        net=cur->next;
        cur->next=prev;
        prev=cur;
        cur=net;
    }
    cur=prev;
    while(cur!=NULL)
    {
        cout<<cur->d<<endl;
        cur=cur->next;
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
