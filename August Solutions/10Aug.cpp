int N,M;
    int solve(string &s1,string &s2,int i,int j,vector<vector<int>>&dp){
        if(i==N || j==M){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int ans=0;
        if(s1[i]==s2[j]){
            ans= 1+solve(s1,s2,i+1,j+1,dp);
        }
        
        else{
            ans=0+ max(solve(s1,s2,i+1,j,dp),solve(s1,s2,i,j+1,dp));
        }
        return dp[i][j]=ans;
    }
    int lcs(int n, int m, string s1, string s2)
    {
        // your code here
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        N=n;M=m;
        return solve(s1,s2,0,0,dp);
    }