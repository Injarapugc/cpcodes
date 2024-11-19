#include<bits/stdc++.h>
using namespace std;
 
const int N=150000+10;
int a[N];
typedef long long LL;
 
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++)	scanf("%d",&a[i]);
		LL ans=-1;
		for(int d=1;d<=n;d++)
		{
			LL mx=-1e18,mn=1e18;
			if(n%d==0)
			{
				for(int i=0;i<n;i+=d)
				{
					LL sum=0;
					for(int j=i;j<i+d;j++)
					{
						sum+=a[j];
					}
					mx=max(mx,sum);
					mn=min(mn,sum);
				}
			}
			ans=max(ans,mx-mn);
		}
		printf("%lld\n",ans);
	}
	return 0;
}