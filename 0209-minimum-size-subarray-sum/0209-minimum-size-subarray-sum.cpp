class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int minlength  = INT_MAX;
        int l = 0;
        int sum = 0;

        for(int r = l;r<n;r++){
            sum = sum + nums[r];
            while(sum >= target){
                minlength = min(minlength,r-l+1);
                sum = sum - nums[l];
                l++;
                
            }
        }
        return(minlength==INT_MAX) ? 0:minlength;
    }
    
};