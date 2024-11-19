#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
    ll n,q,val;
    cin>>n>>q;
    map<int,int>m;
    ll total = 0;
    for (int i = 1; i <= n; ++i) {
        cin>>val;
        m[i] = val;
        total += m[i];
    }
    bool changed = false;
    int big_value = 0;
    for (int i = 0; i < q; ++i) {
        int ch;
        cin>>ch;
        if (ch == 1){
            int po;
            cin>>po>>val;
            if (m[po]){
                total -= m[po];
                total += val;
                m[po] = val;
            } else{
                total -= big_value;
                total += val;
                m[po] = val;
            }
            cout<<total<<endl;
        }
        else{
            cin>>big_value;
            total = big_value*n;
            m.clear();
            cout<<total<<endl;
        }
    }
}
  	 	 	 		 	 			 		  	 	 	 	 	