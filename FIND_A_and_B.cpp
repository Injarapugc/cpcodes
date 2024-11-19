#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a[3];
        cin>>a[0];
        cin>>a[1];
        cin>>a[2];
        sort(a,a+3);
        if(a[2]%a[1]==0)
        {
            cout<<a[2]*a[0]<<" "<<a[1]<<endl;
        }
        else if(a[2]%a[0]==0)
        {
            cout<<a[2]*a[1]<<" "<<a[0]<<endl;
        }
        else cout<<-1<<endl;
        
        
        
    }
	return 0;
}
