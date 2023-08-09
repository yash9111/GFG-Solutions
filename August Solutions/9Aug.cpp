
class Solution{
public: 
    long long int largestPrimeFactor(int N){
        // code here
         // code here
        int ans=2;
        for(int i=2;i*i<=N;i++){
            while(N%i==0){
                
                N=N/i;
            }
            ans=max(i,ans);
        }
        ans=max(ans,N);
        return ans;
    }
};
