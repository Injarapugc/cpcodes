#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;cin>>n;
  int a[n];
  for(int i=0;i<n;i++)cin>>a[i];
 
  int  ans1=a[0];
  for(int i=1;i<n;i++)
  {
    ans1=ans1^a[i];
    
  }
  cout<<ans1;


    
}
