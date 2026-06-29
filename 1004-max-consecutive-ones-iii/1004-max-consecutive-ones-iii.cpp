class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxlength = 0;
       int left = 0;
       int right = 0;
       int zeros = 0;
       for(right = 0;right<n;right++){
        if(nums[right] == 0) zeros++;
        while(zeros> k){
            if(nums[left] == 0) zeros--;
            left++;

        }
      //  if(k<= zeros) {
            int length = right-left +1;
            maxlength = max(length , maxlength);
        //}
        //right++;
       }
        return maxlength;
    }
};