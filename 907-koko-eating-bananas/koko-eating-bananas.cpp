//BS on Answers
class Solution {
public:
    int maxElement(vector<int>& piles){
        int  maxi= INT_MIN;
        int n= piles.size();
        for(int i=0;i<n;i++){
            maxi= max(piles[i],maxi);
        }
        return maxi;
    }
    long long HourCalculator(vector<int>& piles, int val){
    int n= piles.size();
    long long total=0;
    for(int i=0;i<n;i++){
        total+= ceil((double) piles[i]/(double) val);     // to convert anything to another data type alsways use brackets error noted
    }
    return total;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n= piles.size();
        int maxEle= maxElement(piles);
        int low=1,high= maxEle;
        int ans=0;
        while(low<=high){
            long long mid= (low+high)/2;
            long long totalHours=HourCalculator(piles, mid);
           if(totalHours<=h){
           ans= mid;
           high= mid-1;
           }
           else {
            low= mid+1;
           }
        }        
        return ans;
    }
};