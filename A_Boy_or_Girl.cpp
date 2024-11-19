#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    set<char> g{s.begin(),s.end()};
    if(g.size()%2==0)cout<<"CHAT WITH HER!\n";
    else cout<<"IGNORE HIM!";

}