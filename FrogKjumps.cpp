#include <iostream>

int fun(int ind,vector<int>&heights,vector<int>&dp,int k){
    dp[0]=0;
    if(ind==0)return 0;
    for(int i=0;i<n;i++){
        int minsteps=INT_MAX;
        for(int j=1;j<=k;j++){
            if(ind-j>=0){
                int jump=dp[i-j]+abs(heights[ind]-heights[ind-j]);
                minsteps=min(steps,jump);
            }
        }
        dp[i]=minsteps;
    }
    return dp[n-1];
}
int main() {
    // Write C++ code here
    vector<int>dp(n,-1);
    return fun(n-1,heights,dp,k);
    return 0;
}