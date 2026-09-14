class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int result = 0;
        for(int num : nums) {
            result += num;
        }
        int leftsum = 0;
        for(int i = 0; i < nums.size(); i++) {
            int rightsum = 0;
             rightsum = result - leftsum - nums[i];

             if(rightsum == leftsum) {
             return i;
             }
             leftsum += nums[i];
        }
        return -1;
    
    }
};