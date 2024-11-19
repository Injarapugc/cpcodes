#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        x=x*100;
        if(x>=y)cout<<0<<endl;
        else
        {
            y=y-x;
            if(y%100)
            {
                cout<<(y/100)+1<<endl;
            }
            else cout<<y/100<<endl;
        }
    }
}
