#include<bits/stdc++.h>
using namespace std;
int main()
{
    string f;
    cin>>f;
    int l;
    cin>>l;
 
    int m=-1e9;
    int k=-1;
    for(int i=0;i<f.length();i++)
    {
        if(f[i]==f[i+1])
        {
          int aa=0;
          int j=i+1;
          while(f[j]==f[i]&&j<f.length()&&i<f.length())
          
          {
              
              aa++;
              j++;
          }
          if(m<aa)
          {
              k=i;
              m=aa;
          }
          i=j-1;
        }
      
        
    }
    int ans=0;
    cout<<k;
    for(int i=k;i<f.length();i++)
    {
        if(l==0) break;
        if(f[i]!=f[i+1])l--;
        ans++;
    }
    cout<<ans;
}