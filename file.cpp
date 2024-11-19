#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
void print(int l)
{
    if(l==5||l==0)return;
    cout<<l<<" ";
    print(l++);//1 1 2 3 4 
    print(l--);//2
}
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      int l=1;
      print(l)

}
