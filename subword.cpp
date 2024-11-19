#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    map<char,char> a;
    int j=0;
    for(int i=0;i<s1.length();i++)
    {
        if(a[s1[i]]==NULL)
        {
            a[(s1[i])]=(s2[i]);
        }
        else
        {
            if( a[(s1[i])]!=(s2[i]))
            {
                j=1;
                break;
            }
        }
    }
    if(j==0)cout<<"true";
    else cout<<"false";


}