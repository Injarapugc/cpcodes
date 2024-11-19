#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int a1=x*5;
        int a2=2*y+x;
        int a3=3*x+y;
        cout<<min(a1,min(a2,a3))<<endl;
        
        
        
    }
	return 0;
}
