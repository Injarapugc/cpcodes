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
void rizz(int i,vector<string> &r,vector<string> &f,string s)
   {
       if(i==r.size())
       {
           f.push_back(s);
       }
       for(auto x:r[i])
       {
           rizz(i+1,r,f,s+x);
       }

   }
    vector<string> expand(string s) {
        int i=0;
        int n=s.length();
        vector<string> ans;
        while(i<n)
        {
            string riz="";
            if(s[i]=='{')
            {
                i++;
                while(s[i]!='}')
                {
                    riz+=s[i++];
                }
                ans.push_back(riz);
            }
            else
            {
                riz+=s[i];
                ans.push_back(riz);
            }
            i++;
        }
        vector<string> r;
        for(auto x:r)cout<<x<<endl;
        rizz(0,ans,r,"");
        return r;
        
    }
    
int main()
{
    expand("abc");
}