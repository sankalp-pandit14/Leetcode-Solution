class Solution {
public:
    int mySqrt(int x) {
        if(x==0 ||x==1)return x;
        long long ans= 1, low= 1, high= x;
        while(low<=high){
            long long mid= (low+high)/2;
            long long manas= mid*mid;
            if(manas<=x){
                ans= mid;
                low= mid+1;
            }
            else{
                high= mid-1;
            }
        }
        return ans;
    }
};