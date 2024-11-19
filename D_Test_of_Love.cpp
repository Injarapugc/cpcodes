#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N=1000010;
map<int,int >q;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	LL n,m,k;
    	cin>>n>>m>>k;
    	string a;
        int d=0,res=0,res1=0;
		cin >> a;
		bool f=true;
        int di=0;
		for(int i=0;i<n;i++)
        {
            if(a[i]=='L') res1=0;
            else
            {
                res=max(res,res1);
                res1++;
                if(res1>=m&&a[i]=='C')
                {
                    cout<<"NO"<<endl;
                    f=0;
                    break;
                }
                else if(res1>=m&&a[i]=='W')
                {
                    d++;

                }
                if(d>k)
                {
                    cout<<"NO\n";
                    f=0;
                    break;
                }


            }
        }
         if(f)cout<<"YES\n";
	}
   
    return 0;
}