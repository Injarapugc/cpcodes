#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
int ans=0;
int vowles(string s,int l,int ind)
{
    if(ind>l-1)
    {
        return ans;
    }
    if(s[ind]=='a'||s[ind]=='e'||s[ind]=='i'||s[ind]=='o'||s[ind]=='u')ans+=1;
    vowles(s,l,ind+1);
}
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      string s;cin>>s;
      int l=s.length();
      for(int i=0;i<l;i++)
      {
        s[i]=tolower(s[i]);

      }
      vowles(s,l,0);

}
