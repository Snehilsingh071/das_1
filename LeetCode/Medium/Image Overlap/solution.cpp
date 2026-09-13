class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        int ans = 0;

        for(int i = -(n - 1); i <= n - 1; i++) {
            for(int j = -(n - 1); j <= n - 1; j++) {

                int count = 0;

                for(int x = 0; x < n; x++) {
                    for(int y = 0; y < n; y++) {

                        int nx = x + i;
                        int ny = y + j;

                        if(nx >= 0 && nx < n && ny >= 0 && ny < n) {
                            if(img1[x][y] == 1 && img2[nx][ny] == 1) {
                                count++;
                            }
                        }
                    }
                }

                ans = max(ans, count);
            }
        }

        return ans;
    }
};