class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
      //  int n = seats.size() == students.size();
        //int n = students.size();
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int sum = 0;
        for(int i = 0;i< seats.size();i++){
            sum =  sum + abs(seats[i]-students[i]);

        
        }
        return sum;
        
    }
};