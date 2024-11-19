#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string a;
        cin>>a;
        int b,al;
        b=al=0;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                if(a[i]=='A')al++;
            }
            else 
            {
                if(a[i]==a[i-1])
                {
                    if(a[i]=='A') al++;
                    else b++;
                }
            }
            
        }
        cout<<al<<" "<<b<<endl;
    }
	return 0;
}
