#include<bits/stdc++.h>
using namespace std;
class a
{

public:
int perform(int x,int y,char z)
{
    if(z=='+') return x+y;
    else if(z=='-') return x-y;
    else if(z=='*') return x*y;
}
  vector<int> differentways(string s)
  {
    vector<int> results;
    for(int i=0;i<s.length();i++)
    {
        if(!isdigit(s[i]))
        {
            vector<int> left=differentways(s.substr(0,i));
             vector<int> right=differentways(s.substr(i+1));
             for(int &i:left)
             {
                for(int &j:right)
                {
                    int val=perform(i,j,s[i]);
                    results.push_back(val);
                }

             }


        }

    }
  } 

    
};
