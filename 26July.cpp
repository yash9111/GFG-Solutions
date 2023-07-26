int solve(Node* root, int& k ,int node){
    if(!root) return -1;
    if(node == root->data){
        k--;
        return 0;
    }
    
    int a = solve(root->left,k,node);
    int b = solve(root->right,k,node);
    
    if(a == 0 || b == 0){
        if(k == 0) return root->data;
        k--;
    }
    
    return max(a,b);
}

int kthAncestor(Node *root, int k, int node)
{
    // Code here
    int a = solve(root,k,node);
    if(a == 0) return -1;
    return a;
}