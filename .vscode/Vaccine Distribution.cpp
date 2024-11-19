#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    while (n--)
    {
        int n,d;cin>>n>>d;
        int a[n];
        int effect;
        for(int i=0;i<n;i++)
        {
            int b;cin>>b;
            if(b<=9||b>=80)effect++;
            a[i]=b;
        }
        int nonef=n-effect;
        if(effect%d!=0)effect=(effect/d)+1;
        else effect=effect/d;
        if(nonef%d!=0)nonef=(nonef/d)+1;
        else nonef=nonef/d;
        cout<<(nonef+effect)<<endl;
        
    }
    
}