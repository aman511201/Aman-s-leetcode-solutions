class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int n = nums.size();
        int maxrange = -1;
        int ans = 0;

        for (int i = 0; i < n; i++) {
            int num = nums[i];
            int maxi = 0;
            int mini = 9;

            while (num > 0) {
                int digit = num % 10;
                maxi = max(maxi, digit);
                mini = min(mini, digit);
                num = num / 10;
            }
            int range = maxi - mini;
            //maxrange = max(maxrange, range);
            if(range>maxrange){
                maxrange =range;
                ans= nums[i];
            }
             else if (maxrange == range){
                ans = ans + nums[i];
            }
        }
        return ans;
    }
};