#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve(int i,int n,vector<int> &a,int a1[])
{
    if(i==n)
    {
        for(auto x:a)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    if(i==0)cout<<"{}"<<endl;
    a.push_back(a1[i]);
    solve(i+1,n,a,a1);
    a.pop_back();
    solve(i+1,n,a,a1);


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n[4]={1,2,3,4};
    vector<int> a;
    solve(0,4,a,n);
    return 0;
}