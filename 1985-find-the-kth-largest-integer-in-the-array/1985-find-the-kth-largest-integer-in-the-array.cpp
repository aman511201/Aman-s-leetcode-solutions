class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        auto cmp = [](const string &a,const string &b){
            if(a.size()!= b.size())
            return a.size()>b.size();
            return a>b;

        };
        //int n = nums.length();
        priority_queue<string ,vector<string>,decltype(cmp)>pq(cmp);
        for(string num:nums){
            pq.push(num);
            if(pq.size()>k){
                pq.pop();
            }
        }
        return pq.top();

        

    }
};