#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
void solve()
{
    string s;cin>>s;
    int j=0;
    int l=s.length();
    for(int i=0;i<l-1;i+=2)
    {
        if(s[i]-'a'<=j)
        {
            s[i]=char(j+'a');
            j++;
        }
        if(j==26)break;
        
    }
    if(j==26)cout<<s<<endl;
    else cout<<-1<<endl;


}
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      solve();

}
