#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
int count(string s)
{
    int c=0;
    int su=0;
    for(char a:s)
    {
        if(a=='1')
        {
            su+=1<<c;
        }
        c++;

    }
    return su;
}
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      ll t;cin>>t;
      while(t--)
      {
        string a,b;cin>>a>>b;
        int a1=count(a);
        int b1=count(b);
        int c1=0;
        if(b1==0)cout<<0<<endl;
        else if(a1==0)cout<<1<<endl;
        else
        {
            int u,v;
            while(b1>0)
            {
                u=a1^b1;
                v=a1&b1;
                a1=u;
                b1=v*2;
                c1++;

            }
            cout<<c1<<endl;

        }

      }

}
