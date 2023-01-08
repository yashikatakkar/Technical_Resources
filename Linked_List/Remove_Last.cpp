class ListNode {
  public:
    int val;
  ListNode * next;
  ListNode(int x) {
    val = x;
    next = NULL;
  }
};
ListNode* Delete_at_Last(ListNode * head){
    ListNode * curr = head;
    ListNode * prev = head;
    while(curr->next != nullptr){
        prev = curr;
        curr = curr->next;
    }
    delete(curr);

    prev->next = nullptr;
    return head;
}
