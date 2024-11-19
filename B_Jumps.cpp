#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[1000009];
void g()
{
    ll n;
    cin>>n;
    ll k=0;
    while(n>0)
    {
        n-=++k;
    }
    if(n==-1)k++;
    cout<<k<<endl;


}
int main()
{
    int t;
    cin>>t;
    while(t--)g();

}