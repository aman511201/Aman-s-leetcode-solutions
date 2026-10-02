class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        sort(s.begin() , s.end(),greater<char>());
        int n  = s.size();
        int i = n-1;
        while(i>0 && s[i] == '0'){
            i--;

        }
        swap(s[i],s[n-1]);
        return s;

        
    }
};