class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int sum = 0;
        //int maxsum = 0;
        for(int i = 0;i<k;i++){
            sum += cardPoints[i];

        }
        int maxsum = sum ;
        int rightsum = 0;
        for(int j = n-1,i= k-1;i>= 0;i--,j--){
            sum -= cardPoints[i];
            rightsum += cardPoints[j];
            maxsum = max(maxsum,(rightsum+ sum));
        }
        return maxsum;
    }
};