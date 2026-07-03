class Solution {
public:
    bool isvowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    int maxVowels(string s, int k) {
        int sum = 0;
        for (int i = 0; i < k; i++) {
            if (isvowel(s[i]))
                sum++;
        }
        int maxsum = sum;
        int left = 0;
        for (int right = k; right < s.length(); right++) {
            if (isvowel(s[left])) {
                sum--;
            }
                left++;
            
            if (isvowel(s[right])) {
                sum++;
            }
            maxsum = max(maxsum,sum);
        }
        return maxsum;
    }
};