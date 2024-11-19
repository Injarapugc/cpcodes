/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;
const int N=1e6+1;

int main()
{
    int n;cin>>n;
    vector<int> a(N,0);
   
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        a[x]++;
    }
    vector<int> m(N,0);
    for(int i=1;i<N;i++)
    {
        for(int j=i;j<N;j+=i)
        {
            if(a[j])
            m[i]+=a[j];
        }
    }
    int ans;
    for(int i=1;i<N;i++)
    {
        if(m[i]>1)ans=i;
    }
    cout<<ans<<endl;

    return 0;
}