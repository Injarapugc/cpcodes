#include <iostream>
using namespace std;
#define ll long long
int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        string s;
        cin>>s;
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                
                sum++;
            }
        }
        sum=min(sum,n-sum);
        if(sum%2)cout<<"Zlatan\n";
        else cout<<"Ramos\n";
        
    }
}
