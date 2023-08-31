class Solution {
public:
    int minTaps(int n, std::vector<int>& ranges) {
        std::vector<int> dp(n + 1, n + 2); // Set to a value larger than n + 1 to handle the all-zero ranges case
        dp[0] = 0;

        for (int i = 0; i <= n; i++) {
            int tapRange = ranges[i];
            int left = std::max(0, i - tapRange);
            int right = std::min(n, i + tapRange);

            for (int j = left; j <= right; j++) {
                dp[j] = std::min(dp[j], dp[left] + 1);
            }
        }

        return dp[n] <= n + 1 ? dp[n] : -1;
    }
};