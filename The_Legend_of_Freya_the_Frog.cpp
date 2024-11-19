#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define fo(i, n) for (int i = 0; i < int(n); i++)
#define fi(i,n,x)  for (int i = x; i < int(n); i++)
#define mod 1000000007
#define pb push_back
#define pob pop_back
#define ss(a) sort(a.begin(),a.end())
/*
      "Beloved,
       never avenge yourselves,
        but leave it to the wrath of God, for it is written,
        Vengeance is mine, I will repay" - ROMAN 12:19
 */

/*
    Remeber the pain
    Remeber how worthless they made you feel
    Turn that pain into anger
    and show them who you're really are
*/

using namespace std;



void solve() {
    int x, y, k;
cin >> x >> y >> k;
int movesX = (x + k - 1) / k; // calculate the number of moves required to cover the x distance
int movesY = (y + k - 1) / k; // calculate the number of moves required to cover the y distance
int totalMoves = movesX + movesY; // calculate the total number of moves required
if (totalMoves % 2 == 1) { // if the total number of moves is odd, subtract 1
totalMoves--;
}
cout << totalMoves << endl;
 

  

    
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
