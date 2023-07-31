void inorder(vector<int> &ans,Node* root)
    {
        if(root==NULL) return ;
        inorder(ans,root->left);
        ans.push_back(root->data);
        inorder(ans,root->right);
        
    }
    
float findMedian(struct Node *root)
{
        vector<int> ans;
        inorder(ans,root);
        float ans1;
        int n=ans.size();
        if(n%2==0)
        {  
           float a1=ans[n/2-1];
           float a2=ans[n/2];
           ans1=(a1+a2)/2;
        }
        
        else
        {
            ans1=ans[(n-1)/2];
        }
        
        return ans1;
}