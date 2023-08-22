int findMinOpeartion(vector<vector<int> > mat, int n)
    {
        int msum=0,ans=0;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                sum+=mat[i][j];
            }
            msum=max(msum,sum);
        }
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                sum+=mat[j][i];
            }
            msum=max(msum,sum);
        }
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                sum+=mat[i][j];
            }
            ans+=abs(msum-sum);
        }
        return ans;
        
    } 