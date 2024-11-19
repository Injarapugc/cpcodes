#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void s(vector<string> &ans,int i,string l)
{
    if(i==0)
    {
        ans.push_back(l);
        return ;
    }
    s(ans,i-1,l+'a');
    s(ans,i-1,l+'b');
}
int main()
{
    vector<string> su;
    s(su,3,"");
    for(auto x:su)cout<<x<<" ";
    queue<int> l;





}