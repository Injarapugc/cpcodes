#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve(vector<vector<int>> &ans,vector<int> &a,vector<int> &nums,vector<bool> &freq)
{
    if(a.size()==nums.size())
    {
        ans.push_back(a);
    }
    for(int i=0;i<nums.size();i++)
    {
        if(!freq[i])
        {
            freq[i]=1;
            a.push_back(nums[i]);
            solve(ans,a,nums,freq);
            freq[i]=0;
            a.pop_back();
        }
    }

  
    
}
int main()
{
    vector<vector<int>> ans;
    vector<int> a{1,2,3,4};
    vector<bool> freq(4,0);
    vector<int> riz;
    solve(ans,riz,a,freq);
    for(auto i:ans)
    {
        for(auto j:i)cout<<j<<" ";
        cout<<endl;
    }


}