#include <iostream>
#include<vector>
#include<map>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    vector<long int>v(x);
	    map<long int,long int>m;
	    for(int i=0;i<x;i++){
	        cin>>v[i];
	        m[v[i]]++;
	    }
	    long int sum=0;
	    for(auto i:m){
	        if(i.second>1) sum+=((i.second)*(i.second-1))/2;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
