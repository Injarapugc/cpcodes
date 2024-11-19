#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a;cin>>a;
        int ans=a%10;
        if(ans>=5)
        {
            ans=10-ans;
            a+=ans;
        }
        else
        {
            a-=ans;
        }
        cout<<100-a<<endl;
    }
	return 0;
}
