class Solution {
public:
    bool goodstring(string &s,int i){
         int n = s.length();
         
            if(s[i]!= s[i+1] && s[i] != s[i+2]&& s[i+1] != s[i+2]) 
            return true;
            else
            return false;
    }
    int countGoodSubstrings(string s) {
        int n = s.length();
        //int l = 0;
        int count = 0;
        for(int i = 0;i<=n-3;i++){
            if(goodstring(s,i)) 
            count++;
        }
        // int ans = count;
        // for(int i = 2;i<=n-3;i++){
        //     if(goodstring(s,i)){
        //         ans++;
        //     }
        //     else 
        //     l++;
        // }
        return count;
    }
};