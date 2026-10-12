class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;

        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        vector<int> ans;

        while(k > 0) {
            int highestfreq = 0;
            int num = 0;

            for(auto it : mp) {
                if(it.second > highestfreq) {
                    highestfreq = it.second;
                    num = it.first;
                }
            }

            ans.push_back(num);
            mp[num] = 0;
            k--;
        }

        return ans;
    }
};