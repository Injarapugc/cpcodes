#include<bits/stdc++.h>
using namespace std;
void rizz(int i,string s,string &f,vector<int> &a,set<string> &gg)
{
    if(s.empty()==false)
     gg.insert(s);
    if(s.length()==f.length()) 
    {
        return;
    }
    for(int i=0;i<f.size();i++)
    {
        if(a[i]==0)
        {
            a[i]=1;
            if(s.empty()==false)
            rizz(i+1,s+f[i],f,a,gg);
            a[i]=0;
        }
    }

}
int main(){
	string s;
	cin>>s;
    set<string> f;
	vector<int> visited(s.size(),0);
    rizz(0,"",s,visited,f);
	
	cout<<f.size();
	return 0;
}