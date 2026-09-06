#include<bits/stdc++.h>
using namespace std;

// int Jump(int n,vector<int>&dp)
// {
//     if (n == 0)
//         return 1;
//     if(n<=2) return n;
//     if(dp[n]!=-1) return dp[n];
    
//     return dp[n]=Jump(n - 1,dp) + Jump(n - 2,dp) + Jump(n - 3,dp);
// }
int main(){
int n=5;
if(n<=2) return n;
if(n==3) return 4;

vector<int>dp(4);
dp[0]=0;
dp[1]=1;
dp[2]=2;
dp[3]=4;

for(int i=4;i<=n;i++){
dp[0]=dp[1];
dp[1]=dp[2];
dp[2]=dp[3];
dp[3]=dp[0]+dp[1]+dp[2];
}

cout<<dp[3]<<endl;

    return 0;

}
