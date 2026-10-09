
class Solution {
public:
    int bulbSwitch(int n) {
        int ans = 0;

        while((ans + 1) * (ans + 1) <= n) {
            ans++;
        }

        return ans;
    }
};