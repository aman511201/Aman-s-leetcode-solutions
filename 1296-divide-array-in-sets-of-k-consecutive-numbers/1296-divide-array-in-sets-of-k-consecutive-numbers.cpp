class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
      int n = nums.size();
        if(n % k!= 0) return false;
        unordered_map<int ,int> count;
        for(int num: nums){
            count[num]++;
        }
        sort(nums.begin(),nums.end());;
        for(int num : nums){
            if(count[num]==0)
            {
                continue;
            }   
                for(int i = num;i<num+k;i++){
                    if(count[i] == 0) return false;
                    count[i]--;

                
            }
        }
       return true;
    }
};