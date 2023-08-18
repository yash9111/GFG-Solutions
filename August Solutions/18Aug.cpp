class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        
        // T.C. -> O(n) + O(n) = O(n) and S.C. -> O(n)
        vector<int> ans;
        ans.push_back(a[n-1]);
        for(int i=n-2; i>=0; i--){
            if(a[i]<a[i+1]){
                a[i] = a[i+1];
            }else{
                ans.push_back(a[i]);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
        // T.C. -> O(n^2) and S.C. -> O(n)
        // vector<int> ans;
        // bool flag = true;
        // for(int i=0; i<n; i++){
        //     flag = true;
        //     for(int j=i+1; j<n; j++){
        //         if(a[i]<a[j]){
        //             flag= false;
        //             break;
        //         }
        //     }
        //     if(flag){
        //         ans.push_back(a[i]);
        //     }
        // }
        // return ans;
        
    }
};