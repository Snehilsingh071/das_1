class Solution {
public:
   // int minSubArrayLen(int target, vector<int>& nums) {
     //   int n = nums.size();
       // int minLength = INT_MAX;
        //for(int i = 0 ; i < n ; i++) {
          //  int sum = 0;
            //for(int j = i ; j < n ; j++) {
              //  sum += nums[j];
                //if(sum >= target) {
                  //  minLength = min(minLength,(j-i+1));
                //}
            //}
        //}
        //return (minLength == INT_MAX) ? 0 : minLength;
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();

        int left = 0;
        int sum = 0;
        int minlength = INT_MAX;

        for(int right = 0; right < n; right++) {
            sum += nums[right];

            while( sum >= target) {
                minlength = min(minlength,right - left + 1);

                sum -= nums[left];
                left++;
            }
        }

        if(minlength == INT_MAX) {
            return 0;
        }
        else { 
            return minlength;
            }
    }
};
    