#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    long minimalKSum(vector<int>& nums, int k) {
        std::sort(nums.begin(), nums.end());

        long sum = 0;
        int left = 0; // use an extra number 0 as initial left end, so no need to process nums[0] specially
        // loop over nums, add numbers(if any) between two elements to sum
        for(int i = 0; i < nums.size() && k > 0; left=nums[i], i++) { // i points to right end
            int inBetween = nums[i] - left - 1;
            cout<<left<<endl;
            if (inBetween < 1) {
                continue;
            }
            if (inBetween > k) { 
                break;
            }

            sum += (left + nums[i]) / 2.0 * inBetween;
            k -= inBetween;
        }

        // append numbers after the last left till k
        sum += (left+1 + left+k) / 2.0 * k;
        return sum;
    }
};
int main()
{
    Solution a1;
    vector<int>  a{1,4,10,25,25};
    cout<<a1.minimalKSum(a,2);
}