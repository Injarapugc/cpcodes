#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
	    int l;cin>>l;
        int d,u;cin>>d>>u;
	    int a[l];
	    for(int i=0;i<l;i++)cin>>a[i];
        int c=1;
		int p=1;
        for(int i=0;i<l;i++)
		{
			if(a[i]<=a[i+1])
			{
				if((a[i+1]-a[i]<=d))c++;
				else break;
			}
			else
			{
				if(a[i]-a[i+1]<=u)c++;
				else{
					if(p==1)
					{
						p--;
						c++;
					}
					else break;
				}
			}
		}
		cout<<c<<endl;
	    
	}
}