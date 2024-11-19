#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int k;
        cin>>k;
        bitset<32> a=k;
        int ans=0;
        for(int i=0;i<32;i++)if(a[i]==1)ans++;
        if(ans&1)cout<<"odd\n";
        else cout<<"even\n";
    }
}