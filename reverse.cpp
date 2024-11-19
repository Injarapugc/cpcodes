#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int i=0,j=n-1;
    int k=0;
    while(k<n&&i<n&&j>=0)
    {
        if(a[i]!=0)
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
            b[j]=a[i];
            j--;
            i++;
        }
    }
    for(int i=0;i<n;i++)cout<<b[i]<<" ";
}