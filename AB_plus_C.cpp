#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while (t--) {
      ll x;
        cin >> x;
        ll ans=1000000;
        if(x==1)
        {
            cout<<-1<<endl;
        }
        else if(x<=1000000)
        {
            cout<<1<<" "<<1<<" "<<x-1<<endl;
        }
        else if(x%ans==0)
        {
            cout<<(x/ans-1)<<" "<<ans<<" "<<ans<<endl;
        }
        else
        {
             cout<<(x/ans)<<" "<<ans<<" "<<x%ans<<endl;

        }
    }  
    return 0;
}
