class Solution {
public:
    string removeStars(string s) {
        int n= s.size();
        stack<char>st;
        for(int i=0;i<n;i++){
            char c= s[i];
            if(c=='*'){
                if(!st.empty()){
                    st.pop();
                }
            }
            else{
                st.push(c);
            }
        }
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return  ans;
    }
};