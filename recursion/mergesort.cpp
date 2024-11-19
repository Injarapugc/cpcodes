#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
using namespace std;
void merge(vector<int> &a,int low,int mid,int high)
{
  vector<int> temp;
  int l=low;
  int r=mid+1;
  while(l<=mid&&r<=high)
  {
    if(a[l]<=a[r])
    temp.push_back(a[l++]);
    else temp.push_back(a[r++]);
  }
  while(l<=mid)
  {
    temp.push_back(a[l++]);
  }
  while(r<=high)
  {
    temp.push_back(a[r++]);
  }
  for(int i=low;i<=high;i++)
  {
    a[i]=temp[i-low];
  }
}
void mergeSort(vector<int> &arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2 ;
    mergeSort(arr, low, mid);  // left half
    mergeSort(arr, mid + 1, high); // right half
    merge(arr, low, mid, high);  // merging sorted halves
}

int main()
{
  
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5}  ;
    int n = 7;

    mergeSort(arr, 0, n - 1);
    cout << "After Sorting Array: " << endl;
    for (auto x:arr) {
        cout << x << " "  ;
    }
    cout << endl;
    return 0 ;
  
    return 0;
}