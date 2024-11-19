#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        string s,s1;
        string maxi,mini;
        cin>>s>>s1;
        if(s.length()>s1.length())
        {
            maxi={s.begin(),s.end()};
            mini={s1.begin(),s1.end()};
        }
        else
        {
            maxi={s1.begin(),s1.end()};
            mini={s.begin(),s.end()};

        }
        int f=0;
        int l=max(s.length(),s1.length());
        int m=min(s.length(),s1.length());
        int i=0;
        int j=0;
        while(i<l)
        {
            if(mini[i]==maxi[j])
            {
                f++;
                i++;
                j++;
            }
            else j++;
            if(f==m)break;
            if(j==l)break;
        }
        if(m==f)cout<<"YES\n";
        else cout<<"NO\n";
    }
}