#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string temp="";
    vector<string> ans;
    while ((getline(ss,temp,' ')))
    {
        ans.push_back(temp);
        /* code */
    }
    cout<<ans[0];
    
    

}
