#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,a,b;
	    cin>>n>>a>>b;
	    if(abs(a-b)>2 || (a==b)){
	        cout<<0<<endl;
	    }
	    else if((abs(a-b)==2)|| ((abs(a-b)==1)&& (a==1 || a==n || b==1 || b==n))){
	        cout<<1<<endl;
	    }
	   // else if(){
	   //     cout<<1<<endl;
	   // }
	    else{
	        cout<<2<<endl;
	    }
	}
	return 0;
}