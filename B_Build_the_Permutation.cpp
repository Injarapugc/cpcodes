#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{
    ll n,a,b;
    cin>>n>>a>>b;
    if(a+b+2>n||abs(a-b)>1  )
    {
        cout<<-1<<endl;
        return;
    }
    else
    {
        int i=1;
        int j=n;
        int f=(a>=b?1:0);
        while (a>0||b>0)
        {
            if(f)
            {
                cout<<i++<<" ";
                a--;
            }
            else
            {
                cout<<j--<<" ";
                b--;
            }
            f=!f;
            /* code */
        }
        while (f&&i<=j)
        {
            cout<<i++<<" ";
            a--;
        }
        while (!f&&i<=j)
        {
            cout<<j--<<" ";
            b--;
        }
        cout<<endl;
        

        
        
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