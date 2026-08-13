class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
       int n = arr.size();
       int i = 0;
        int sum = 0;
        int maxsum = INT_MIN;
        for(int j = 0;j < n;j++) {
            sum += arr[j];
                
                
            if (j-i+1 == k) {
                    maxsum = max(maxsum,sum);
                    sum -= arr[i];
                    i++;
                }
            }
        
        return maxsum;
        
    }
};