class Solution {
public:
    string frequencySort(string s) {
     unordered_map<char,int>value;
     for(int i=0;i<s.size();i++){
        value[s[i]]++;
     }
     sort(s.begin(),s.end(),[&](char a,char b){
     if(value[a]==value[b]){
        return a>b; // a comes before b if true 
     }
     return value[a]>value[b]; //if true a comes before b
    });
    return s;
    }
};