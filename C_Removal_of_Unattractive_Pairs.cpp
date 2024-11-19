#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char , int>mp;
        int mx =  -1e9;
        for(int i = 0 ; i < n; i++)
        {
           mp[s[i]]++;
           mx = max(mp[s[i]] , mx);
        }
        if(mx > n / 2)
            cout<<n-(n - mx) * 2<<endl;
else
    cout<< n % 2 <<endl;
    }
}
 								  				  	  	 	     	 	