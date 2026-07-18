class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.length();
        int l = 0;
        int whcount = 0;
        for(int i = 0; i<k;i++){
            if(blocks[i] == 'W')
            whcount++;
        


        }
        int ans = whcount;
        for(int right = k ; right<=n-1;right++){
            if(blocks[l] == 'W')
                whcount--;
            l++;
            
            if(blocks[right] == 'W')
            whcount++;
            ans = min(ans,whcount);


          
        }

        return ans;


    }
};