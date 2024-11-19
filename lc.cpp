#include<bits/stdc++.h>
using namespace std;
int r(string &l,string &m,int i,int j)
{
    if(i<0||j<0)
    {
        return 0;
    }
    if(l[i]==m[j])
    {
        return 1+r(l,m,i-1,j-1);
    }
    else
    {
        return 0+max(r(l,m,i-1,j),r(l,m,i,j-1));
    }
}
int main()
{
     string rj;
    cin>>rj;
    int n=rj.length();
    string a{rj.rbegin(),rj.rend()};
    cout<<r(rj,a,n-1,n-1);

}