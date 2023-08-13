  int nthFibonacci(int n){
        // code here
          int dp[n+1]; 
        dp[1]=1, dp[2]=1; 
        const int mod=1e9+7;
        for(int i=3;i<=n;i++)    
            dp[i]=(dp[i-1]+dp[i-2])%mod;
        return dp[n];
    }