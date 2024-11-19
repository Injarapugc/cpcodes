#include<bits/stdc++.h>
using namespace std;
class Solution {

    public:
    void combination(int ind,int target,vector<int> &a,vector<int> &ds,vector<vector<int>> &ans)
    {
        if(ind==a.size())
        {
            if(target==0)
            {
                ans.push_back(ds);
            }
            return;
        }
        if(a[ind]<=target)
        {
            ds.push_back(a[ind]);
            combination(ind,target-a[ind],a,ds,ans);
            ds.pop_back();
        }
        combination(ind+1,target,a,ds,ans);
    }
public:
     
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
         combination(0,target,candidates,ds,ans);
         return ans;        
    }
};

