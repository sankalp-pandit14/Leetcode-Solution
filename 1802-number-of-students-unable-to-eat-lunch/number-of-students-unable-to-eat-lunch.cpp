class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n= students.size();
        int arr[2]={0};
        for(int i=0;i<n;i++){
            int stud= students[i];
            arr[stud]++;
        }
        for(int i=0;i<n;i++){
            int sand=sandwiches[i];
            if(arr[sand]==0){
                return n-i;
            }
            arr[sand]--;
        }return 0;
    }
 };
// queue<int> q;
// stack<int> st;

//     for (int i = 0; i < students.size(); i++) {
//         q.push(students[i]);
//     }

//     for (int i = sandwiches.size() - 1; i >= 0; i--) {
//         st.push(sandwiches[i]);
//     }

//     int rotations = 0;

//     while (!q.empty() && rotations < q.size()) {
//         if (q.front() == st.top()) {
//             q.pop();
//             st.pop();
//             rotations = 0;
//         }
//         else {
//             q.push(q.front());
//             q.pop();
//             rotations++;
//         }
//     }

//     return q.size();