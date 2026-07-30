class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.length();
        int m = p.length();
        vector<int> ans;
        if (m > n)
            return {};

        vector<int> freqs(26, 0);
        vector<int> freqp(26, 0);
        for (char ch : p) {
            freqp[ch - 'a']++;
        }
        for (int i = 0; i < m; i++) {
            freqs[s[i] - 'a']++;
            if (freqs == freqp)
                ans.push_back(0);
        }
        int l = 0;

        for (int i = m; i < n; i++) {
            freqs[s[i] - 'a']++;
            freqs[s[i - m] - 'a']--;
            if (freqs == freqp) {
                ans.push_back(i-m+1);
            }
        }
        return ans;
    }
};