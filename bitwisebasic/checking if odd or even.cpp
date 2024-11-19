#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    set<string> ans;
    for(int i=0;i<n;i++)
    {
        string f=a[i];
        auto ggg=ans.find(f);
        if(ggg==ans.end())
        {
            ans.insert(f);
        }
        else
        {
            for(int k=1;k<10000;k++)
            {
                string g=f;
                g+=to_string(i);
                auto kk=ans.find(g);
                if(kk==ans.end())
                {
                    ans.insert(g);
                    break;
                }
                
            }
        }
    }
    for(auto x:ans)cout<<x;
}