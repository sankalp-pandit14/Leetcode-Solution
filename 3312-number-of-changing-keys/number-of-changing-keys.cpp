class Solution {
public:
    string toLowerCase(string s){
        for(int i=0;i<s.size();i++){
         if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i]=s[i]+32;
         }
        }
        return s;
    }
    int countKeyChanges(string s) {
        int n= s.size();
        string s1= toLowerCase(s);
        int count=0;
        for(int i=0;i<n-1;i++){
            if(s1[i]!=s1[i+1]){
                count++;
            }
        }
        return count;
    }
};