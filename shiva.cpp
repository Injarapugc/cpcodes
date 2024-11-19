#include<bits/stdc++.h>
using namespace std;
int main() {
    string a,b;
    cin>>a;
    cin>>b;
    int n1=a.length(),n2=b.length();
    int i=0,j=0;
    int ans=0;
    while(i<n1&&j<n2)
    {
        if(a[i]==b[j])
        {
            i++;
            j++;
        }
        else
        {
            ans++;
            i++;
        }
    }
    cout<<ans<<endl;

   
}