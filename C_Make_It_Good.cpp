#include<bits/stdc++.h>
using namespace std;
int t,a[200010],n;

void solve(){
  cin>>n;

  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  int l=n;
  bool f=0;
  for(int i=n-1;i>=1;i--){
    if(a[i]>a[i+1]){
      if(f)break;
      l=i;
    }
    else if(a[i]<a[i+1]){
      f=1;
      l=i;
    }
    else{
      l=i;
    }
  }
  cout<<l-1<<'\n';
  return ;
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}