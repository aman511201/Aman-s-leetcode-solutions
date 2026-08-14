class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        vector<int>prefix(n+1,0);
        for(int i = 0;i<n;i++){
            prefix[i+1] = prefix[i]+ arr[i];

        }
        
        for(int l = 0;l<n;l++){
            for(int r = l;r<n;r++){
                int len = r-l+1;
                if(len%2==1){
                    int sum= prefix[r+1]-prefix[l];
                    ans+= sum;
                }
            }
        }
        return ans;
    }
};