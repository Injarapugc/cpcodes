#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        long ans = 0;
        for(int i = 0; i< n - 1; i++){
            ans = ans ^ array[i];
        }
        cout<<ans<<"\n";
        for(int i = 1; i<= n; i++){
            ans = ans ^ i;
        }
        return ans;
    }
int main()
{
    int n;
    cin>>n;
    vector<int> a(n-1);
    for(auto &x:a)cin>>x;
    cout<<missingNumber(a,n);
}    