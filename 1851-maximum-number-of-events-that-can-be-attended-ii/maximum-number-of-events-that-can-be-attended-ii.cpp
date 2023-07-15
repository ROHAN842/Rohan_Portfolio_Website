class Solution {
public:
    vector<vector<int>> dp;
    int n;

    int attend(int i, int num, vector<vector<int>>& events){
        if (i == n || num == 0) return 0;
        if (dp[i][num] != -1) return dp[i][num];

        // Attend the event i
        int j = upper_bound(events.begin()+i, events.end(), vector<int>{events[i][1]+1, 0, 0}) - events.begin();
        int attend_i = events[i][2] + attend(j, num - 1, events);

        // Skip the event i
        int skip_i = attend(i+1, num, events);

        // Choose the maximum of attend_i& skip_i
        int ans = max(attend_i, skip_i);
        return dp[i][num] = ans;
    }

    int maxValue(vector<vector<int>>& events, int num) {
        n = events.size();
        sort(events.begin(), events.end());
        dp.assign(n + 1, vector<int>(num + 1, -1));
        return attend(0, num, events);
    }
};