#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void riz(int n, vector<string> &ans,string r,int i)
{
    if(n==0)
    {
        ans.push_back(r);
        return;
    }
    if(r[i-1]=='0'||r=="")
    {
        riz(n-1,ans,r+'0',i+1);
        riz(n-1,ans,r+'1',i+1);
    }
    else
    {
        riz(n-1,ans,r+'0',i+1);
    }
}
vector<string> generateString(int N) {
    vector<string> a;
    riz(N,a,"",0);
}