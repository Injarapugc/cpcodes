#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int int64_t
int arr[(int)1e6+10];
set<int> prime;
void t_prime()
{
    prime.insert(4);
    for(int i=3;i<(int)1e6+1;i+=2)
    {
        if(arr[i]==0)
        {
            prime.insert(i*i);
            for(int j=i;j<=1e6;j+=i)
            {
                arr[j]=1;
            }
        }
    }
}
int32_t main()
{
    int n;cin>>n;
    t_prime();
    while(n--)
    {
        int x;cin>>x;
        if(prime.find(x)!=prime.end())cout<<"YES\n";
        else cout<<"NO\n";
    }
}

