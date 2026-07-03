class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
      int sum = 0;
      for(int i = 0;i<k;i++){
        sum = sum + nums[i];

      }
      int maxsum = sum;
      int left = 0;
      int right = k-1;
      for(int right = k;right<nums.size();right++){
        sum = sum - nums[left];
        left ++;
        
        sum = sum + nums[right];
        maxsum = max(sum,maxsum);
      }
      return (double)maxsum/k;
    }
};