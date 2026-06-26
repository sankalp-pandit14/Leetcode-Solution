class Solution {
public:
    long long summing(vector<int>& candies){
        int n= candies.size();
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=candies[i];
        }
        return sum;
    }
    int maxEle(vector<int>& candies){
        int  maxi= INT_MIN;
        int n= candies.size();
        for(int i=0;i<n;i++){
            maxi= max(candies[i],maxi);
        }
        return maxi;
    }
    long long value(vector<int>& candies,int v){
       int n= candies.size();
       long long sum=0;
       for(int i=0;i<n;i++){
      sum += candies[i] / v;
       }
       return sum;
    }
    int maximumCandies(vector<int>& candies, long long k) {
         int n= candies.size();
         int ans=0;
         if(summing(candies)<k){
            return 0;
         }
         int low=1,high= maxEle(candies);
         while(low<=high){
            int mid= (low+high)/2;
           long long a= value(candies,mid);
            if((long long)a>=k){
                ans=mid;
            low= mid+1;
            }
            else{
            high=mid-1;
            }
         }
         return ans;
    }
};