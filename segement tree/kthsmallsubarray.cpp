#include<bits/stdc++.h>
using namespace std;
int kthSmallestSubarraySum(vector<int>& nums, int k) {
        // Initialize the left and right boundaries for binary search
        int leftBound = INT_MAX, rightBound = 0;
        // Find the smallest number in the nums array and the total sum
        for (int x : nums) {
            leftBound = min(leftBound, x);
            rightBound += x;
        }
      
        // Lambda function to count the subarrays with sum less than or equal to 'sum'
        auto countSubarraysLEQ = [&](int sum) {
            int totalCount = 0;
            int subarraySum = 0;
            for (int i = 0, j = 0; i < nums.size(); ++i) {
                subarraySum += nums[i];
                // Increment j to maintain the condition that subarraySum <= sum
                while (subarraySum > sum) {
                    subarraySum -= nums[j++];
                }
                // Update the total count of subarrays ending at index i
                totalCount += i - j + 1;
            }
            return totalCount;
        };
      
        // Binary search to find the kth smallest subarray sum
        while (leftBound < rightBound) {
            int mid = leftBound + (rightBound - leftBound) / 2;
            if (countSubarraysLEQ(mid) >= k) {
                rightBound = mid;
            } else {
                leftBound = mid + 1;
            }
        }
      
        // The left bound will be the kth smallest subarray sum
        return leftBound;
    }

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &x:a)cin>>x;
    int k;
    cin>>k;
    cout<<kthSmallestSubarraySum(a,k);
    

}