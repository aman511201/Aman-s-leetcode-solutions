class Solution {
public:
    int minOperations(vector<int>& nums) {
        // int l = 0;
        // int r = 3;
        // for(int i = 0;i<r;i++){
        int n = nums.size();
        int ans = 0;
        for(int i = 0;i<n;i++){
            if(nums[i]==0){
                if(i+2>=n){
                    return -1;

                }
            

            for(int j = i;j<i+3;j++){
                nums[j]^=1;
            }
            ans++;
        }
        
            
        }
        return ans;
    }
};