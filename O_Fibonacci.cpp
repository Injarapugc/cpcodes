#include<bits/stdc++.h>
using namespace std;
int rix(int n)
{
    if(n<=1)
    {
        if(n<=0) return 0;
        return 1;
    } 
    int l=rix(n-1);
    int b=rix(n-2);
    return l+b;
}
int main()
{
    int n;
    cin>>n;
    cout<<rix(n-1);
}