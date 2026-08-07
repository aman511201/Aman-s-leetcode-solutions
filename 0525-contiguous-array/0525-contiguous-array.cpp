class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        mp[0] = -1;
        int prefix = 0;

        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0)
                prefix += -1;
            else
                prefix += 1;
            if(mp.count(prefix)){
                ans = max(ans,i-mp[prefix]);

            } 
            else{
                mp[prefix] = i;
            }   
        }
        return ans;
    }
};