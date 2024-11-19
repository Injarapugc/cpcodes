#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        int a,b;cin>>a>>b;
        int c=log2(a);
        int d=log2(b);
        if(a==b)cout<<0<<endl;
        else if(a%2==0)
        {
            
            if(pow(2,c)==a)
            {
                cout<<abs(d-a)<<endl;

            }
            else
            {
                int c1=0;
                while (a!=2||a!=1)
                {
                    if(a%2==0)a=a/2;
                    else a=(a-1)/2;
                    c1++;
                }
                if(a==1)cout<<c1+(d)<<endl;
                else{
                    cout<<c1+(d-1)<<endl;
                }
                

            }
            
        }
        else
        {
            a=(a-1)/2;
            c=log2(a);
            if(pow(2,c)==a)
            {
                cout<<abs(d-a)<<endl;
            }
            else
            {
                int c1=0;
                while (a!=2||a!=1)
                {
                    if(a%2==0)a=a/2;
                    else a=(a-1)/2;
                    c1++;
                }
                if(a==1)cout<<c1+(d)<<endl;
                else{
                    cout<<c1+(d-1)<<endl;
                }

            }

        }
    }
}