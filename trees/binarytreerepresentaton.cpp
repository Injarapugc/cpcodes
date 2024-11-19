#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
  ll mod=1000000007;
  struct node
  {
   
    struct  node *left;
    struct  node *right;
    int data;
    node(int val)
    {
        left=NULL;
        right=NULL;
        data=val;
    }


  };
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    return 0;
}