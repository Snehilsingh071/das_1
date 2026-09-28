class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector <int> arr(nums.size());
        int positive = 0;
        int negative = 1;

        for(int i = 0; i <nums.size();i++) {
            if(nums[i] > 0) {
                arr[positive] = nums[i];
                positive += 2;
            }
            else {
                arr[negative] = nums[i];
                negative += 2;
            }
        }
        return arr;
    }
};