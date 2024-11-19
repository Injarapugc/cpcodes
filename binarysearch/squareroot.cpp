#include<bits/stdc++.h>
using namespace std;
#define int long long int

using namespace std;
signed floorSqrt(int n)
{
    auto it=[&](int i){
        return i*i<=n;
    };
    int l=-1;
    int r=1e5;
    while(r-l>1)
    {
        int m=(l+r)/2;
        if(it(m)) l=m;
        else r=m;
    }
    return l;
}

signed  main()
{
    cout<<sqrt(1e9);
}
    

    
