#include<bits/stdc++.h>
using namespace std;
bool check(vector<vector<char>> &b,int r,int c,char l)
{
    for(int i=0;i<9;i++)
    {
        if(b[i][c]==l) return false;

    }
     for(int i=0;i<9;i++)
    {
        if(b[r][i]==l) return false;
    }
     for(int i=0;i<9;i++)
    {
        if(b[3*(r/3)+i/3][3*(c/3)+i%3]==l) return false;
    }
    return true;
}
bool riz(vector<vector<char>> &b)strin
{
    for(int i=0;i<b.size();i++)
    {
        for(int j=0;j<b[0].size();j++)
        {
            if(b[i][j]=='.')
            {
                for(char c='1';c<'10';c++)
                {
                    if(check(b,i,j,c))
                    {
                        b[i][j]='c';
                        if(riz(b)==true) return true;
                        else b[i][j]='.';

                    }

                }
            }
        }
    }

}
int main()
{
    vector<vector<char>> b{{"5","3",".",".","7",".",".",".","."},{"6",".",".","1","9","5",".",".","."},{".","9","8",".",".",".",".","6","."},{"8",".",".",".","6",".",".",".","3"},{"4",".",".","8",".","3",".",".","1"},{"7",".",".",".","2",".",".",".","6"},{".","6",".",".",".",".","2","8","."},{".",".",".","4","1","9",".",".","5"},{".",".",".",".","8",".",".","7","9"}};
    
}
