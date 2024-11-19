#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
bool prime(int a)
{
    for(int i=2;i*i<=a;i++)
    if(a%i==0)return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      int tc;cin>>tc;
      while(tc--)
      {
        int a1;cin>>a1;
        int a=a1;
        a++;
        while(true)
        {
            if(prime(a)) break;
            else a++;

        }
        int b=a+a1;
        while(true)
        {
            if(prime(b)) break;
            else b++;
        }
        cout<<a*b<<endl;
        int z=__gcd(1,2);
      }


}
