#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string f1=" ";
        for(int i=0;i<2;i++)f1+=s[i];
        string f2=" ";
         for(int i=3;i<5;i++)f2+=s[i];
         int fir=stoi(f1);
         int sec=stoi(f2);
 
         if(fir<=12&&sec<=12)cout<<"BOTH\n";
         else if(fir>12&&sec<=12)cout<<"DD/MM/YYYY\n";
         else if(fir<=12) cout<<"MM/DD/YYYY\n";
         
         
        
        
        
    }
    
	return 0;
}
