#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int solve(){
    int n;
    cin>>n;
    int even=(n+1)/2,temp=0;
    int odd=n-even;
    int maxo_even=INT_MIN,maxo_odd=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(i&1){
            // odd
            maxo_odd = max(maxo_odd, temp);
        }
        else{
            // even
            maxo_even = max(maxo_even, temp);
        }
    }
    cout<<max(maxo_even+even,maxo_odd+odd)<<endl;
    return 0;
}
int main()
{
    int testCase=1;
    cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;
}