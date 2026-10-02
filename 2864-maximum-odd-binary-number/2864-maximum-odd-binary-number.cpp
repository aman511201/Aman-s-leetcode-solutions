class Solution {
public:
    string maximumOddBinaryNumber(string s) {
       
        int n = s.size();
        int count = 0;

        for(int i = 0;i<n;i++){
            if(s[i] == '1')
            count++;

        }
        string result((count -1),'1');
        result += string(n-count,'0');
        result +='1';
        return result;
    }
};