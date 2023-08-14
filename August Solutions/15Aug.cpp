class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        int zero = 0;
        int maximum = 0;
        int one = 0;
        for(int i=0; i<n; i++){
            if(a[i]==0){
                zero++;
            }
            else{
                zero--;
                one++;
            }
            maximum = max(zero, maximum);
            if(zero<0){
                zero=0;
            }
        }
        return maximum+one;
    }
};