#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    char a[2],b[2];
    for(int i=0;i<2;i++){
        cin>>a[i];
    }
    for(int i=0;i<2;i++){
        cin>>b[i];
    }
    int x=a[0]-'0'-(b[0]-'0');
    int y=a[1]-'0'-(b[1]-'0');
    int absx=abs(x);
    int absy=abs(y);
    cout<<abs(max(absx,absy))<<endl;
    while(abs(x)!=abs(y)){
        if(abs(x)>abs(y)){
            if(x<0){
                x++;
                cout<<"R"<<endl;
            }
            else if(x>0){
                x--;
                cout<<"L"<<endl;
            }
        }
        else if(abs(x)<abs(y)){
            if(y<0){
                y++;
                cout<<"U"<<endl;
            }
            else if(y>0){
                y--;
                cout<<"D"<<endl;
            }
        }
    }
    while(abs(x)==abs(y)&&x!=0&&y!=0){
        if(x>0&&y>0){
            x--;
            y--;
            cout<<"LD"<<endl;
        }
        if(x>0&&y<0){
            x--;
            y++;
            cout<<"LU"<<endl;
        }
        if(x<0&&y>0){
            x++;
            y--;
            cout<<"RD"<<endl;
        }
        if(x<0&&y<0){
            x++;
            y++;
            cout<<"RU"<<endl;
        }
    }
    return 0;
}
	  	 	 	 	 	  		 						    		 	