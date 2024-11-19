#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,m;cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)cin>>a[i][j];
    }
    int l=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='W')
            {
                if(i==0)
                {
                    if(a[1][j]=='P')
                    {
                        a[1][j]==".";
                        l++;

                    }
                }

            }

            
        }
    }



}

