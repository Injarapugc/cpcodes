#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        int j=x/y;
        if(j>20)cout<<20<<endl;
        else cout<<j<<endl;
    }
}
