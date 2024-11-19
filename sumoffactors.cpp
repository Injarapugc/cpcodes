#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;cin>>n;
    int s=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            s+=i;
            s=n/i;
        }
    }
    cout<<s<<endl;

    

}

