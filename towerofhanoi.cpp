#include<bits/stdc++.h>
using namespace std;
void l(int n,char f_r,char t_r,char a_r )
{
    if(n==0) return ;
    l(n-1,f_r,a_r,t_r);
    cout<<f_r<<t_r<<endl;
    l(n-1,a_r,t_r,f_r);
}
int main()
{
    int n=3;
    l(3,'A','c','b');
}