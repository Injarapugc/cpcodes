#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void fun(ll n)
{
    cout<<n<<" ";
    if(n==1)
    {
        return;
    }
    if(n%2==0)
    {
        fun(n/2);
    }
    else
    {
        fun((n*3)+1);
    }
}
int main()
{
    ll n;cin>>n;
    fun(n);

}

