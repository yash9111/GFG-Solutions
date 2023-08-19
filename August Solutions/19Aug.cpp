vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        int i=0,j=0;
        long long sum=0;
        while (j<=n){
        //   cout<<sum<<endl;
            if (sum<s){
                 sum+=arr[j];
                 j++;
            }
            else if (sum>s){
                sum-=arr[i];
                i++;
                
            }
            else {
                if (i+1<=j)
                return {i+1,j};
                else return {-1};
            }
        }
        return {-1};
    }