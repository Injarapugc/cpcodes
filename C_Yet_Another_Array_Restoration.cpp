#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define M 1000000007
#define pb push_back
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
		int n,x,y;
		cin>>n>>x>>y;
		int diff=y-x;
		int d,k;
        for(int i=diff;i>0;i--)
        {
            if(diff%i==0&&n>=i+1)
            {
                k=i;
                break;
            }
        }
        d=diff/k;
        vector<int> ans;
        int c=y;
        while (ans.size()<n&&c>0)
        {
            ans.push_back(c);
            c=c-d;
        }
        c=y;
        while (ans.size()<n)
        {
            ans.push_back(c+d);
            c=c+d;
        }
        for(auto x:ans)cout<<x<<" ";
        cout<<endl;
        
    }       
}