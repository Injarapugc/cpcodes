#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    stringstream ss(str);
    map<int,int> a;
    while(ss.good())
    {
        string f;
        getline(ss,f,',');
        int x=stoi(f);
        a[x]++;
       
    }
    int ans=0;
    int k=0;
    for(auto x:a)
    {
        if(x.second%2==0)ans+=x.second/2;
        else if(x.second%3==0)ans+=x.second/3;
        else
        {
            if(x.second%3==2)
            {
                ans+=x.second/3;
                ans++;
                
            }
            else
            {
                k=-1;
                break;
            }
        }
           
        }
    }
   