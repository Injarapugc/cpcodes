#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> m(n,0);
    for(int i=0;i<n;i++)
    {
        int noofdays;
        cin>>noofdays;
        int mask=0;
        for(int j=0;j<noofdays;j++)
        {
            int d;
            cin>>d;
            mask=mask|(1<<d);
        }
        m[i]=mask;
    }
    for(auto x:m)
    {
        cout<<x<<endl;
    }



}