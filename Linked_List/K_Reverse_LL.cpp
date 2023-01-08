class ListNode {
  public:
    int val;
  ListNode * next;
  ListNode(int x) {
    val = x;
    next = NULL;
  }
};

ListNode* Reverse_LL (ListNode* head, int k){
    ListNode * prev = NULL;
    ListNode * curr = head;
    ListNode * further = head;
    int count = 0;
    while(curr != nullptr && count < k){
        further = curr->next;
        curr->next = prev;
        prev = curr;
        curr = further;
        count++;
    }
     if (further != NULL)
        head->next = reverse(next, k);
    return prev;
}
