class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int l = 0;
        int sum = 0;
        for(int i = 0;i<k;i++){
            sum= sum + arr[i];
           
        }
        int ans = 0;
        if(sum>= k*threshold){
            ans++;
        }
        for(int r= k;r<n;r++){
            sum = sum  + arr[r];
            sum = sum -arr[r-k];
            if(sum>= k*threshold)
            ans++;
            
            
        }
        return ans;
    }
};