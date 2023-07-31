 Node * Successor(Node *root , Node *x , Node * &temp){
      Node*current = root;
      while(current){
          if(current ->data > x->data){
              temp = current;
              current = current->left;
          }
          else{
              current = current->right ;
          }
      }
      return temp;
  }
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        //Your code here
        Node *temp = 0;
        return Successor (root , x , temp);
        
    
    }