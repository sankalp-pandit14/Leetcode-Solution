class Solution {
public:
    string reverseWords(string s) {
        stringstream  str(s);// it basically reads after a space
        string temp;
        string ans;
        while(str>>temp){
            ans=temp+' '+ans;
            
        }
        ans.pop_back();// easy approACH  but for interviews 
        return ans;
    }
};


//if(ans.empty())                  this is best
//     ans = temp;
// else
//     ans = temp + " " + ans;