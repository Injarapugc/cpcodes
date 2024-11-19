int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        long ans = 0;
        for(int i = 0; i< n - 1; i++){
            ans = ans ^ array[i];
        }
        cout<<ans<<"\n";
        for(int i = 1; i<= n; i++){
            ans = ans ^ i;
        }
        return ans;
    }