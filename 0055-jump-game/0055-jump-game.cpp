class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        //if (nums[0] == 0)
          //  return false;
        int fartest = 0;
        for (int i = 0; i < n ; i++) {
            if (i > fartest)
                return false;

            fartest = max(fartest, i + nums[i]);
            if (fartest >= n - 1){
                return true;
            }
        }
        return true;
    }
};