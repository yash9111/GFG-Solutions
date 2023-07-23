    vector<int> rightView(Node *root)
    {
       // Your Code here
    
         vector<int>ans;
       if(!root)return {};
       queue<Node*>que;
       que.push(root);
       while(!que.empty()){
           int n=que.size();
           for(int i=0;i<n;i++){
               Node*temp=que.front();
               que.pop();
               if(i==n-1){
                   ans.push_back(temp->data);
               }
               if(temp->left)que.push(temp->left);
               if(temp->right)que.push(temp->right);
           }
       }
       return ans;
        
    }