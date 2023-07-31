 Node* segregate(Node *head) {
        
        // Add code here
          if(!head) return head;
        
        stack<Node*> s;
        Node* dummynode = new Node(-1);
        Node* dummy = dummynode;
        
        Node *curr = head;

        int slecte = 2;
        while(slecte != -1){
            if(curr->data == slecte)
            s.push(curr);
            
            
            curr = curr->next;
            if(curr == NULL){
                curr = head;
                slecte--;
            }
        }
        
        while(!s.empty()){
            dummy->next = s.top();
            dummy = dummy->next;
            s.pop();
        }
        
        dummy->next = NULL;
        head = dummynode->next;
        dummynode->next = nullptr;
        delete dummynode;
        
        return head;
    }