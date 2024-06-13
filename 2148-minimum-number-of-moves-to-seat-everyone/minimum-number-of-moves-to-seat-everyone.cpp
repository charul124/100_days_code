class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int n = seats.size();
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int count =0;
        for(int i =0;i<n; i++){
            if(seats[i] == students[i]){
                count = count;
            }
            if(seats[i] > students[i]){
                int res = seats[i]-students[i];
                count += res;
            }
            if(seats[i] < students[i]){
                int res = students[i]-seats[i];
                count += res;
            }
        }
        return count;
    }
};