#include<bits/stdc++.h>
using namespace std;
void moveArrayRight (int array[], int dim){
            if(dim!=1){
                int holder;
                holder = array[dim-1];
                array[dim-1]=array[dim-2];
                array[dim-2]=holder;
                moveArrayRight(array, dim-1);
            }
 }
int main()
{
    int a[]{1,2,3,4};
    moveArrayRight(a,3);
    for(int i=0;i<4;i++)cout<<a[i]<<" ";

}