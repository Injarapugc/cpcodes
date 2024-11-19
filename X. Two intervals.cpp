#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int l1,r1,l2,r2;cin>>l1>>r1>>l2>>r2;
    if((l1<=l2&&l2<=r1)||(l2<=l1&&l1<=r2))
    {
        cout<<max(l1,l2)<<" "<<min(r1,r2)<<endl;
    }
    else cout<<-1<<endl;


}
