void fold_LL(node** head) {
    node *slow = *head, *fast = slow->next; 
    while (fast && fast->next) { 
        slow = slow->next; 
        fast = fast->next->next; 
    } 
    struct node* head1 = *head; 
    struct node* head2 = slow->next; 
    slow->next = NULL;
    Reverse_LL(&head2);
   
    *head = newNode(0); 
    node* curr = *head; 
    while (head1 || head2) { 
        if (head1) { 
            curr->next = head1; 
            curr = curr->next; 
            head1 = head1->next; 
        } 
  
        if (head2) { 
            curr->next = head2; 
            curr = curr->next; 
            head2 = head2->next; 
        } 
    } 
  
    *head = (*head)->next; 
} 
