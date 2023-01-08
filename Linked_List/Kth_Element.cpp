class ListNode {
  public:
    int val;
  ListNode * next;
  ListNode(int x) {
    val = x;
    next = NULL;
  }
};

ListNode* Reverse_LL(ListNode * head){
    ListNode * prev = NULL;
    ListNode * curr = head;
    ListNode * further = head;
    while(curr != nullptr){
        further = curr->next;
        curr->next = prev;
        prev = curr;
        curr = further;
    }
    ListNode * temp = head;
    head = prev;
    return head;
}
int get_Kth_element(ListNode* head, int k){
    ListNode* slow = head;
    ListNode* fast = head;
    for(int i = 0; i < k ; i ++){
        fast = fast->next;
    }
    while(fast){
        slow = slow->next;
        fast = fast->next;
    }
    return slow->val;
}
