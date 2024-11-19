#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void solve()
{
    
}
int main()
{
    vector<int> nums{0,1,1,1,0,1,1,0,1};
    int n=nums.size();
     vector<int> p(n+1);
        vector<int> s(n+1);
        p[0]=0;
        s[n]=0;
        for(int i=1;i<=n;i++)
        {
             if(nums[i-1]==0) p[i]=0;
            else
            p[i]=nums[i-1]+p[i-1];
        }
        for(int i=n-1;i>=1;i--)
        {
           if(nums[i+1]==0) s[i]=0;
            else
            s[i]=nums[i+1]+s[i+1];

        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,s[i]+p[i]);
        }
        cout<<ans<<endl;
}