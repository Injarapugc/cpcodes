    #include <bits/stdc++.h>
#include <math.h>
 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
    
    long long M=998244353;
    long long mod(long long x){
        return ((x%M + M)%M);
    }
    long long add(long long a, long long b){
        return mod(mod(a)+mod(b));
    }
    long long mul(long long a, long long b){
        return mod(mod(a)*mod(b));
    }
    
    void solve (){
        int n,q;
        cin>>n>>q;
        vector<long long>a(n+1);
        vector<long long>pref(n+1);
        vector<long long>maxi(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            pref[i] = pref[i-1]+a[i];
            maxi[i] = max(maxi[i-1],a[i]);
        }
        for(int i=0;i<q;i++){
            long long ans=0;
            long long x;
            cin>>x;
            int k = upper_bound(maxi.begin(),maxi.end(),x) - maxi.begin() -1;
            if(k>=0){
                ans = pref[k];
            }
            cout<<ans<<" ";
        }
        cout<<"\n";
    }
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cout<<fixed;
        cout<<setprecision(10);
//        freopen("timber_input.txt", "r", stdin);
//        freopen("timber_output.txt", "w", stdout);
        int t=1;
        cin>>t;
        for(int i=1;i<=t;i++){
            // cout<<"Case #"<<i<<": ";
            solve();
        }
        return 0;
    }