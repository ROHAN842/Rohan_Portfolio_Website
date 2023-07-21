class Solution {
public:
    vector<int> dp; //dp[i]=length of the LIS ending at index i
    vector<int> count;// # of LIS with length=dp[i]

    void LIS_bottom_up(vector<int>& nums, int n){
        dp.assign(n, 1);
        count.assign(n, 1);
        for (int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                if(nums[i]>nums[j]){
                    if (dp[i]<dp[j]+1) {
                        dp[i]=dp[j]+1;
                        count[i]=count[j];
                    }
                    else if (dp[i]==dp[j]+1){
                        count[i]+=count[j];   
                    }    
                }      
            }
        } 
    }

    int findNumberOfLIS(vector<int>& nums) {
        int n=nums.size();
        LIS_bottom_up(nums, n);

        int M=*max_element(dp.begin(), dp.end());
    //    cout<<M<<endl;
        int ans=0;
        for (int i=0; i<n; i++){
    //        cout<<dp[i]<<",";
            if (M==dp[i])
                ans+=count[i];
        }   
    //    cout<<"\n---\nans="<<ans<<endl;
        return ans;
    }
};