//Function to return a list containing the level order traversal in spiral form.
vector<int> findSpiral(Node *root)
{
    //Your code here
      vector<Node*> q;
    vector<int> ans;
    q.push_back(root);
    int cnt=1;
    while(q.size()){
        vector<Node*> p;
        vector<int> d;
        for(auto it:q){
            d.push_back(it->data);
            if(it->left){
                p.push_back(it->left);
            }
            if(it->right){
                p.push_back(it->right);
            }
        }
        if(cnt){
            reverse(d.begin(),d.end());
        }
        for(auto it:d)ans.push_back(it);
        q=p;
        cnt=1-cnt;
    }
    return ans;
}