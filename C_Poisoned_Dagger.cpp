class Solution {
public:
    int riz(vector<int> &a,int t,int n)
    {
        if(n==a.size())
        {
            return t==0;
        }
        int p=riz(a,t+a[n],n+1);
        int ne=riz(a,t-a[n],n+1);
        return (ne+p);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
    
        return riz(nums,target,0);
        
    }
};