class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.length();
        n= t.length();
        int left = 0;
        int windowdiff = 0;
        int ans = 0;
        for(int right = 0;right<n;right++){
        windowdiff += abs(s[right] - t[right]);
        while(windowdiff>maxCost){
            windowdiff -= abs(s[left] - t[left]);
            left++;
            
        }
        ans = max(ans,(right - left +1));
        }
        return ans;
    }
};