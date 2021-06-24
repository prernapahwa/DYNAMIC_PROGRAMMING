class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1) {
            return 0;
        }
        int min=INT_MAX;
        int ans=0;
        int n=prices.size();
        for(int i=0,j=1;j<n;i++,j++) {
            if(prices[i]<min) {
                min=prices[i]; 
            }
            if(prices[j]-min>ans){
                ans=prices[j]-min;
            }
            
        }
        return ans;
    }
};
