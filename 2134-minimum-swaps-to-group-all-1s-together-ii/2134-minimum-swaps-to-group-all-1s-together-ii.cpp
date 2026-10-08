class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        for (int c : nums) {
            if (c == 1) {
                k++;
            }
        }
        if (k == 0 || k == n)
            return 0;
        int l = 0;
        int ones = 0;
        int maxones = 0;

        for (int i = 0; i < n + k - 1; i++) {
            if (nums[i % n] == 1) {
                ones++;
            }
            if (i >= k) {
                if (nums[(i - k) % n] == 1) {
                    ones--;
                }
            }
            if (i >= k - 1) {
                maxones = max(maxones, ones);
            }
        }
        return k - maxones;
    }
};