class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i = 0, j = 0;
        
        vector<int> ans;
        while(j < n) {
            while(j < n and nums[i] == nums[j]) j++;
            if(j-i > n/3) ans.push_back(nums[i]);
            i = j;
        }
        
        return ans;
    }
};