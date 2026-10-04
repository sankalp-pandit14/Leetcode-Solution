class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n= s.size();
        stack<int>st;
        unordered_set<int>remove;
        for(int i=0;i<n;i++){
            char c= s[i];
            if(c=='('){
                st.push(i);
            }
            else if(c==')'){
                if(st.empty()){
                remove.insert(i);}
                else{
                    st.pop();
                }
            }}
            while(!st.empty()) //this for those element which are not in the set andd lonely like (
            {
                remove.insert(st.top());
                st.pop();
            }
            string result="";
            for(int i=0;i<n;i++){
                if(remove.find(i)==remove.end()){
                    result.push_back(s[i]);
                }
            }
            return result;
    }
};