class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int  maxi=0;
        int count=0;
        int ans=0;
        int n= sentences.size();
        for(int i=0;i<n;i++){
            int p= sentences[i].size();
            int count =0;
            for(int j=0;j<p;j++){
                if(sentences[i][j]==' '){
                   count++;
                }
                maxi=max(maxi,count);
            }
        }
          ans=maxi+1;
          return ans;
    }
};