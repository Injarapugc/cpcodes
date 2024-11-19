#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int countZeros(int idx, string& str, vector<ll>& next, vector<int>& res) {
   if (res[idx] != -1) return res[idx];
   int zeros = 0, cur = idx;
   vector<int> temp;
  
   while (res[cur] == -1) {
       temp.push_back(cur);
       res[cur] = 0;
       if (str[cur] == '0') zeros++;
       cur = next[cur];
   }
  
   if (res[cur] > 0) zeros += res[cur];
   for (int j : temp) res[j] = zeros;
  
   return zeros;
}
 
void process() {
   int n;
   cin >> n;
   vector<ll> next(n);
   for (int i = 0; i < n; i++) {
       ll x;
       cin >> x;
       next[i] = x - 1;
   }
  
   string str;
   cin >> str;
   vector<int> res(n, -1);
  
   for (int i = 0; i < n; i++) {
       if (res[i] == -1) countZeros(i, str, next, res);
   }
  
   for (int i = 0; i < n; i++) {
       cout << res[i] << " ";
   }
   cout << endl;
}
 
int main() {
   int t;
   cin >> t;
   while (t--) {
       process();
   }
   return 0;
}