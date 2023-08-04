class Solution {
public:
    vector<int> dp;
    bool solve(int i, string s, vector<string>& wordDict){
        if (i < 0) return 1;
        if (dp[i] != -1) return dp[i] == 1;
        for (string& w : wordDict) {
            int sz = w.size();
            if (i - sz + 1 < 0) continue;
            if (s.rfind(w, i-sz+1)== i-sz+1 && solve(i - sz, s, wordDict)) {
                dp[i] = 1;
                return 1;
            }
        }
        dp[i] = 0;
        return 0;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        int&& n = s.size();
        dp.assign(n, -1);
        return solve(n - 1, s, wordDict );
    }
};
