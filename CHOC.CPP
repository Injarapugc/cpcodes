#include<bits/stdc++.h>
using namespace std;
int dp[100000];
#define long long int  int;

int32_t main()
{
    int n;
    cin>>n;
    n--;
    int d=0;
    int i=1;
    while(n>0)
    {
        if(n-i>0)
        { 
            while(n-i>0)
            {
                n-=i;
              i++;
               d++;

            }
            
        }
        else if(n-i==0)
        {
            n-=i;
            d++;
            
        }
        else
        {
            i--;
        }



    }
    cout<<d+1;
}