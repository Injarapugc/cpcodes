#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> a{1,2,2,2,3};
    int target=2;
    auto pred=[&](int i){
        return a[i]<target;
    };
    int l=-1,r=a.size();
    while (r-l>1)
    {
        int m=(l+r)/2;
        if(pred(m)) l=m;
        else r=m;
        /* code */
    }
    cout<<r;
    

    return 0;
}