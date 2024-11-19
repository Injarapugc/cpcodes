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



void solve() {
    int n;
    cin >> n;
    if(n%2==0)
    {
      cout<<-1<<endl;
      return ;
    }

   
    vector<int> p(n);
    int left = 0, right = n - 1;
    int value = 1;

    while (left <= right) {
        
        if (value % 2 == 1) {
            p[left++] = value++;
        } else {
            p[right-- ]= value++;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << p[i] << " ";
    }
    cout << "\n";
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
