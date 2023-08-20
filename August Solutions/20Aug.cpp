int binary(int a[],int n,int x){
    int low =0;
    int high =n-1;
    
    while(low<high){
        int mid = (low+high)/2;
        if(a[mid]==x){
            return mid;
        }
        else if(a[mid]>x){
            high = mid-1;
        }
        else{
            low =mid+1;
        }
    }
}
int count(int arr[], int n, int x) {
    // code here
    int index = binary(arr,n,x);
    int i = index;
    int cnt =0;
    while(i>=0 && arr[i]==x){
        cnt++;
        i--;
    }
    i = index+1;
    while(i<n && arr[i]==x){
        cnt++;
        i++;
    }
    return cnt;
}