 long long dp[1001][1001];
    int mod = 1e9+7;
    int help( int open, int close){
        if( open == 0 & close == 0){
            return 1;
        }
        if( open < 0 || close < 0)
        return 0;
        if(dp[open][close] != -1 )
        return dp[open][close];
        
        long long o = help( open-1, close)%mod;
        long long c = 0;
        if( close > open){
            c = help( open, close-1)%mod;
        }
        return dp[open][close] =( o + c) % mod;
    }
    int findCatalan(int n) 
    {
        //code here
        memset( dp, -1, sizeof dp);
        return help( n, n);
    }