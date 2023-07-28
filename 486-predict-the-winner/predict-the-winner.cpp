class Solution {
private:

int play ( int left , int right , bool turn , vector<int>&nums)
{   
    // in this case no more moves are possible hence return 0

    if( left > right)
    {
        return 0;
    }
    
    // turn = true means p1 is choosing hence he will choose such that sum of value maximises
    // turn  = false means p2 is choosing hence he will choose such that sum of value minimises for p1 

    if( turn == true)
    {   
        // pick best from left and right i.e return maximum

        int pick_left = nums[left] + play( left + 1 , right , false , nums);
        int pick_right = nums[right] + play( left , right - 1 , false , nums);

        return max( pick_left , pick_right);
    }
    else
    {   
        // skip best from left and right i.e return minimum 

        int skip_left = play( left + 1 , right , true , nums);
        int skip_right = play( left , right - 1 , true , nums);

        return min( skip_left , skip_right);
    }
}

public:
    bool PredictTheWinner(vector<int>& nums) {
        
        // left right turn 

        // turn =  true means p1 will choose
        // turn = false means p2 will choose 
        
        
        int sum = 0;

        for( auto x : nums) sum += x;

        int n = nums.size();
         
        int max_score_p1 = play( 0 , n-1 , true , nums);
        
        int max_score_p2 = sum - max_score_p1;
        
        // if p1 sum is greater than equal to p2 sum then return true

        return max_score_p1 >= max_score_p2;

    }
};