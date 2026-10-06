class Solution {
public:
    long long minimumSteps(string s) {
      int n = s.length();
      long long step = 0;
      long long zeros = 0;
      for(char c : s){
        if(c== '1'){
            zeros++;
        }
        else{
            step+=zeros;
        }
        
      }
      return step;

    }
};