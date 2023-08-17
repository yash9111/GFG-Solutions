class Solution{
public:
vector<int> generateNextPalindrome(int num[], int n) 
{
    int r = (n/2)-1;
    int l;
    bool a = false;
    vector<int>ans(n);
    bool b = true;
    
    for(int i = 0; i < n; i++)
    {
        if(num[i] != 9)
        {
            b = false;
            break;
        }
    }
    
    if(b == true)
    {
        ans[0] = 1;
        for(int i = 1; i < n; i++)
        {
            ans[i] = 0;
        }
        ans.push_back(1);
        return ans;
    }
    
    if(n % 2 == 0)
    {
        l = n/2;
    }
    
    else
    {
        l = (n/2)+1;
    }
    
    while(r >= 0)
    {
        if(num[r] > num[l])
        {
            a = true;
            break;
        }
        
        if(num[r] < num[l])
        {
            break;
        }
        
        r--;
        l++;
    }
    
    if(a == true)
    {
        int i = 0;
        int j = n-1;
        
        while(i <= j)
        {
            ans[i] = ans[j] = num[i];
            i++; 
            j--;
        }
        
        return ans;
    }
    
    else
    {
        int p;
        if(n % 2 != 0)
        {
            p = n/2;
        }
        
        else
        {
            p = (n/2) - 1;
        }
        
        while(p >= 0)
        {
            if(num[p] != 9)
            {
                ans[p] = num[p] + 1;
                p--;
                break;
            }
            
            else
            {
                ans[p] = 0;
                p--;
            }
        }
        
        while(p >= 0)
        {
            ans[p] = num[p];
            p--;
        }
        
        int i = 0;
        int j = n-1;
        
        while(i < j)
        {
            ans[j] = ans[i];
            i++;
            j--;
        }
    }
    
    return ans;
}
 
};