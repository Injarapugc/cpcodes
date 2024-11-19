#include<bits/stdc++.h>
using namespace std;
#define lll long long int
using namespace std;
 int check(string s)
    {
        reverse(s.begin(),s.end());
        int n=s.length();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cout<<s<<endl;
            ans=ans*10+s[i]-0;
        }
        cout<<ans<<endl;
        return ans;
    }
    bool areNumbersAscending(string s) {
        int c=-1;
        string l="";
        for(int i=0;i<s.length();i++)
        {
             l="";
            if(isdigit(s[i]))
            {
                l+=s[i];
                for(int j=i+1;j<s.length();j++)
                {
                    if(isdigit(s[j])) l+=s[i];
                    else break;
                }
            }
            cout<<l<<endl;
            int ll=check(l);
            if(c>ll) return false;
            else c=ll;
        }
        return true;
        
    }
int main()
{
    vector<int> a{8,4,6,2,3};
    for(int i=0;i<4;i++)
    {
        int l=lower_bound(a.begin()+i,a.end(),a[i])-a.begin();
        cout<<a[l]<<endl;

    }

  }