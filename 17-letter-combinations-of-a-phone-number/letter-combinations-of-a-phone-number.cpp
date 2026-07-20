class Solution {
public:
    vector<string>ans;
         void solve(string temp,int index, string digits,vector<string>& map){
        if(index == digits.size())
        {
            ans.push_back(temp);
            return;
        }
       string length= map[digits[index]-'0'];
       for(int i=0;i<length.size();i++){
        char ch= length[i];
        solve( temp+ch,index+1,digits,map);
       }
        }
    vector<string> letterCombinations(string digits) {
        vector<string> map = {
            "", "", "abc", "def",
            "ghi", "jkl", "mno",
            "pqrs", "tuv", "wxyz"
        };
      ans.clear();
      solve("",0,digits,map);
      return ans;
    }
};