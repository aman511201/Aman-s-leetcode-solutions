class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
         long long sum = 0;
         for(int i = 0;i<n;i++){
            sum += (nums[i])%p;
           
         }
          int k = sum%p;
          if(k== 0) return 0;
          unordered_map<int,int>mp;
          mp[0] = -1;
          int curr = 0;
          int result  = n;
          for(int i = 0;i<n;i++){
            curr = (curr + nums[i])%p;
            int rem = (curr-k+p)%p;
            if(mp.find(rem) != mp.end()){
                result = min(result,i-mp[rem]);

            }
            mp[curr] = i;
          }
          return result == n ? -1: result;
    }
};