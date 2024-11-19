#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> ans;
    vector<int> a{1,2,3,4};
    int s=a.size();
    s=1<<s;
    for(int i=0;i<s;i++)
    {
        vector<int> sub;
        for(int j=0;j<a.size();j++)
        {
            if(i&(1<<j)!=0)
            {
                sub.push_back(a[j]);
            }
            ans.push_back(sub);
        }

    }
    cout<<ans[3][2];
}