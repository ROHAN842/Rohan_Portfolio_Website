class Solution {
public:
    int findDuplicate(vector<int>& nums) {
int dup;
sort(nums.begin(),nums.end());
for(int i=0;i<nums.size();i++){
if(nums[i]==nums[i+1]){
dup=nums[i];
break;}}
return dup;
    }
};