#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
void change(int &a,int pios)
{
    a=a|(1<<pios);
}
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      int a;cin>>a;
      int pos;cin>>pos;
      change(a,pos);
      cout<<a;


}
