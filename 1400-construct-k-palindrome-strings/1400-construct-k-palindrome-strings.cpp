class Solution {
public:
    bool canConstruct(string s, int k) {
        if(k>s.length())
        return false;
        int freq[26]  = {0};
        for(char c: s){
            freq[c-'a']++;

        }
        int odd = 0;
        for(int i = 0;i<26;i++){
            if(freq[i]%2==1){
                odd++;

            }
        }
        return odd<=k;
    }
};