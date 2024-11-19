#include<bits/stdc++.h>//library function
using namespace std;
#define ll long long
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
int search(vi &a,ll key)//user defined 
{
    int l=0,r=a.size()-1;
    while (l<r)
    {
        //(l+r+1)/2 it is used when to left and right are two adjacent elements we get over flow
        ll mid=ceil(l+r)/2;
        if(a[mid]<=key) l=mid;
        if(a[mid]>key) r=mid-1;
    }
    return l;
    

}
int main()
{
    ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      vi a{1,1,1,2,2,2,3,3,3};

}
