#include <bits/stdc++.h>
#include<math.h>
#include<string>
#define for1(i,n)      for(int i=0;i<n;i++)
#define for2(i,n)      for(int i=1;i<=n;i++)
#define for3(i,n)      for(int i=n;i>=0;i--)
#define sort1(a,n)    sort(a,a+n)
#define sort2(a,n)    sort(a,a+n,greater<int>())
#define sortv1(a)     sort(a.begin(),a.end())
#define sortv2(a)     sort(a.begin(),a.end(),greater<int>())
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for1(i,n)
    {
        cin >> arr[i];
    }
    int m = 0;
    for1(i,n)
    {
        for(int j = i; j < n; j++)
        {
            int k = 0;
            int c = 0;
            while(k < n)
            {
                if(i <= k && k <= j)
                {
                    if(1-arr[k] == 1)
                        c++;
                }
                else
                {
                    if(arr[k] == 1)
                        c++;
                }
                k++;
            }
                m = max(m, c);
        }
    }
    cout<< m<< endl;
}
