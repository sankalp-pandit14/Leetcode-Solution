class Solution {
public:
    string ansFinder(string val){
        int n= val.size();
        stack<char>st;
        for(int i=0;i<n;i++){
        char c= val[i];
       if(c == '#') {
        if(!st.empty()){
        st.pop();
      }
        }
      else {
    st.push(c);
}}
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    bool backspaceCompare(string s, string t) {
        // int n= s.size();
        // int n1= t.size();
        // if(n!=n1) return  false;
        string value1= ansFinder(s);
        string value2= ansFinder(t);
        if(value1==value2)  return true;
        else{
            return false;
        }
    }
};