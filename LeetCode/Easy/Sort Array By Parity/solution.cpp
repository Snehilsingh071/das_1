class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        while( low <= high) {
          if(nums[low] % 2 == 0) {
            low++;
          }
          else if(nums[high] % 2 == 1) {
            high--;
          }
          else {
            swap(nums[high],nums[low]);
            low++;
            high--;
          }
        }
            
        return nums;
    }
};