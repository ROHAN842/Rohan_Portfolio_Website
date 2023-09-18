class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
      priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
      for(int i=0; i<mat.size(); i++) {
        int cur = 0;
        for(int j=0; j<mat[i].size(); j++) {
          if(mat[i][j]==1)
            cur++;
        }
        pq.push({cur, i});
      } 
      vector<int> ans;
      while(k--) {
        int top = pq.top().second;
        pq.pop();
        ans.push_back(top);
      }
      return ans;
    }
};