 struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        
        if(!head) return NULL; 
        node* prev = NULL;
        node* curr = head;
        node* nxt=NULL;
        int count = 0;
        while(curr && count<k){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
            count++;
        }
        
        if(nxt){
            head->next = reverse(nxt,k);
        }
        
        return prev;
    }