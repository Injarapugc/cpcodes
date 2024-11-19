#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int t,n,k;
	    cin>>t>>n>>k;
	    int g=t-n;
	    int b1=n%k;
	    int g1=g%k;
	    int ans=1e9;
        if(g1==0)cout<<b1<<endl;
        else cout<<min(b1,g1)<<endl;
	}
}
