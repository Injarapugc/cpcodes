#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
  vector<string> findRepeatedDnaSequences(string s) {
        set<string> ans;
        for(int i=0;i<s.length()-11;i++)
        {
            string r="";
            r+=s.substr(i,10);
            for(int j=i+1;j<s.length()-11;j++)
            {
                string l="";
                l+=s.substr(j,10);
                if(r==l)
                {
                    ans.insert(r);
                }
            }
        }
        vector<string> riz{ans.begin(),ans.end()};
        return riz;
        
    }
int main()
{
    string s="AAAAAAAAAAA";
    vector<string> ans=findRepeatedDnaSequences(s);
    for ( auto x:ans)
    {
        cout<<x<<endl;
    }
    
}