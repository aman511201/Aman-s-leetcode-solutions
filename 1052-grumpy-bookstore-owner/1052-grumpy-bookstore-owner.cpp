class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        n = grumpy.size();
        int basesum = 0;
        int maxsum = 0;
        for (int i = 0; i < n; i++) {
            if (grumpy[i] == 0) {
                basesum = basesum + customers[i];
            }
            // int extrasum = 0;
            // for(int j = 0;j<minutes;j++){
            //     if(grumpy[i] == 1){
            //         extrasum += customers[j];

            //     }
        }
        int extrasum = 0;
        for (int j = 0; j < minutes; j++) {
            if (grumpy[j] == 1) {
                extrasum += customers[j];
            }
        }
            maxsum = extrasum;
            int left = 0;

            for (int r = minutes; r < n; r++) {
                if (grumpy[left] == 1)
                    extrasum -= customers[left];
                if (grumpy[r] == 1)
                    extrasum += customers[r];
                left++;
                maxsum = max(maxsum, extrasum);
            
        }
        return (maxsum + basesum);
    }
};