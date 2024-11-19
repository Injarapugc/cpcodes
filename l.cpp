/*KMIT exam branch is preparing seating plan for coming examinations,they want to prepare new seating plan for every exam.They asked you to develop a program, which reverse every group of consecutive `m`-students of a subarray list from a given list.

Input format : integer number n(for creating main list with numbers  
                                starting from 1 to n).
               integer number m 
			   integers i and j (start and end index where reversal is to                   be applied).
Note : 1. if m value is greater than length of specified subarray then 
          print the list with out any changes.(example 3)
	   2. If i>=j then print the list with out any changes.


For example,
Example 1 :
Input: n=10
m=3
i=1 j=9
output:[1, 4, 3, 2, 7, 6, 5, 10, 9, 8]

Explanation : start index is 1 and end index is 9. there are 9 elements in that sub array, and "m" value is 3 i.e 3 consecutive elements of this subarray have to be reversed. 
2,3,4 reversed to 4,3,2
5,6,7 reversed to 7,6,5
8,9,10 reversed to 10,9,8
final output is [1, 4, 3, 2, 7, 6, 5, 10, 9, 8]


Example 2:
input :10
3
3 5
output = [1, 2, 3, 6, 5, 4, 7, 8, 9, 10]

Example 3:
input 10
3
3 4
output:[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

*/
#include<bits/stdc++.h>
using namespace std;
void riz(vector<int> &a,int m,int i,int j)
{
    if(m>(j-i+1))
    {
        for(auto x:a)cout<<x<<" ";
        return;
    }
    if(i>=j)
    {
        for(auto x:a)cout<<x<<" ";
        return;
    }
    reverse(a.begin()+i,a.begin()+m+i);
    riz(a,m,i+m+1,j);
}
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int i,j;
    cin>>i>>j;
    vector<int> a(n);
    for(int i=0;i<n;i++)a[i]=i+1;
    riz(a,m,i,j);


}