class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {

        int n = code.size();
        int left,right;
        vector<int>arr(n,0);
        if(k==0){
            return arr;

        }
        if(k<0){
            k = -k;
             left = n-k;
             right = n-1;

        }
        else{
              left = 1;
             right = k;
        }
           int sum = 0;
        for(int i = left;i<=right;i++){
            sum = sum + code[i];
        }

        for(int i = 0;i<n;i++){
            arr[i] = sum;
            sum = sum - code[left%n];
            left++;
            right++;
            sum = sum + code[right%n];
        }
     
       return arr;
    }
};