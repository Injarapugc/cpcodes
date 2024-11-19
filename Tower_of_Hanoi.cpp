#include<bits/stdc++.h>
using namespace std;
void solve(int s,int d,int a,int n)
{
    if(n<=0) return;
    solve(s,a,d,n-1);
    cout<<s<<" "<<d<<endl;
    solve(a,d,s,n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<(1<<n)-1<<endl;
    solve(1,3,2,n);
}
