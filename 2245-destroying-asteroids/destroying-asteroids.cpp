class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        int n= asteroids.size();
        long long ans = mass;
        bool sanki = true;
        for(long long i=0;i<n;i++){
            if(asteroids[i]<=ans){
              ans+=asteroids[i];
            }
            else{
                sanki= false;
            }
        }
        return sanki;
    }
};