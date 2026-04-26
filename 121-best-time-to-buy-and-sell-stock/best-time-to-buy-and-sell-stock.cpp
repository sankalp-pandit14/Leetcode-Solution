class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int min =INT_MAX;
        int max=0;
        int profit =0;
        for(int i=0; i<n ;i++){
            if(prices[i]<min){
                min=prices[i];
            }
            else{
                profit= prices[i]-min;
                if(profit>max){
                    max=profit;
                }
            }
            }              
                
            
        return max;
    }
};