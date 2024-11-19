#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k;cin>>k;
    vector<int> a(n);
    for(auto &x:a)cin>>x;
    
    vector<int> f;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=a[i];
        for(int j=i+1;j<n;j++)
        {
            sum+=a[j];
            f.push_back(sum);

        }

    }
    for(auto x:a)f.push_back(x);
    sort(f.begin(),f.end());
    for(auto x:f)cout<<x<<" ";

}