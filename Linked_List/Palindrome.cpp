bool isPalindrome(Node* head){
        
        Node* slow= head;
        stack <int> s;
         while(slow != NULL){
                s.push(slow->val);
                slow = slow->next;
        }
        while(head != NULL ){
           int i = s.top();
            s.pop();
        if(head -> next != i){
                return false;
            }
        head = head->val;
        }
 
        return true;
}
