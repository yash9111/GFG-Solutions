int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        vector<vector<int>>dp(x+1, vector<int>(y+1, 0));
        vector<int>prev(y+1, 0), curi(y+1, 0);
        for(int i=0; i<=x; i++){
            prev[0]=0;
        }
        for(int j=0; j<=y; j++){
            prev[j]=0;
        }
        
        for(int i=1; i<=x; i++){
            for(int j=1; j<=y; j++){
                if(s1[i-1]==s2[j-1]){
                     curi[j]=1+prev[j-1];
                }else{
                     curi[j]=max(prev[j], curi[j-1]);
                }
            }
            prev=curi;
        }
        return prev[y];
    }
        
    int longestPalinSubseq(string A) {
        //code here
        string s2=A;
        reverse(s2.begin(), s2.end());
        int x=A.size();
        return lcs(x, x, A, s2);
    }