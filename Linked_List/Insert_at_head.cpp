class ListNode {
  public:
    int val;
  ListNode * next;
  ListNode(int x) {
    val = x;
    next = NULL;
  }
};
void Insert_at_Head(ListNode * head, int val){
    ListNode * newnode = new ListNode(val);
    newnode->next = head;
    head = newnode;
    return head;

}
