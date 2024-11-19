#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a,b;
        cin>>a>>b;
        int x,y;
        x=y=0;
        while ((b-x)>0&&(a+x)%(b-x)!=0)x++;
        while ((a-y)>0&&(b+y)%(a-y)!=0)y++;
        if((a-y)%(b+y)) y=1e9;
        cout<<min(x,y)<<endl;

        
    }
    
}