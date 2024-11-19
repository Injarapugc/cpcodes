#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int k=0;
    int x3,y3,x4,y4;
    if(x1==x2)
    {
        int s=abs(y1-y2);
        x3=x1+s;
        x4=x2+s;
        y3=y1;
        y4=y2;
    }
    else if(y1==y2)
    {
        int s=abs(x1-x2);
        y3=y1+s;
        y4=y2+s;
        x3=x1;
        x4=x2;
    }
    else if(abs(x1-x2)==abs(y2-y1))
    {
        x3=x1;
        y3=y2;
        x4=x2;
        y4=y2;
    }
    else k=1;
    if(k==1)cout<<-1;
    else
    {
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
    }
}