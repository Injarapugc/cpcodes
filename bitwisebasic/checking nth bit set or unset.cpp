#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
bool seta(int &a,int pos)
{
    return(a&(1<<pos));
}
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      int a,pos;cin>>a>>pos;
      cout<<seta(a,pos);

}
