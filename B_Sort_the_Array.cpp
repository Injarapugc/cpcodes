//IOI - EGOI - OII 2024
//#pragma GCC optimize("Ofast") 
//#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(); cin.tie(0); cout.tie();
#define ll long long
#define ss second
#define ff first
#define endl '\n'
using namespace std;
const int MAX=1e6+5;
const ll INF=1e9+5;
const ll MOD=1e9+7;
ll A[MAX];
ll B[MAX];
ll C[MAX];
ll S_2[MAX];

void go(){
    int n;  cin>>n;
    for(int i=0;i<n;i++){
        cin>>A[i];
        B[i]=A[i];
    }
    sort(A,A+n);
    int a=-1,b=-1;
    for(int i=0;i<n;i++){
        if(A[i]!=B[i]){
            a=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(A[i]!=B[i]){
            b=i;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(a<=i and i<=b){
            C[i]=B[b-i+a];
        }
        else{
            C[i]=B[i];
        }
    }
    bool res=true;
    for(int i=0;i<n;i++){
        if(C[i]!=A[i]){
            res=false;
        }
    }
    if(res){
        if(a==-1){
            a++;
            b++;
        }
        cout<<"yes"<<endl;
        cout<<a+1<<" "<<b+1<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}

int main(){
    fastio;
    go();
    return 0;
}
 							   		  		    		   		 		