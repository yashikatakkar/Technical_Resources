class ListNode {
  public:
    int val;
  ListNode * next;
  ListNode(int x) {
    val = x;
    next = NULL;
  }
};

int Merge_2SortedLists(ListNode* l1 , ListNode * l2){
    if(ll2.head == nullptr)
        return;

    if(ll1.head == nullptr)
    {
        head = ll2.head;
        ll2.head = nullptr;
        return;
    }

    Node *head1 = ll1.head;
    Node *head2 = ll2.head;

    Node *node;

    if(head1->data <= head2->data)
    {
        node = head1;
        head1=head1->next;
    }
    else if(head2->data <= head1->data)
    {
        node = head2;
        head2=head2->next;
    }

    Node *tmp = nullptr;
    tmp = node;

    while(head1 != nullptr && head2 != nullptr)
    {
        if(head1->data <= head2->data)
        {
            tmp->next = head1;
            head1=head1->next;
        }
        else
        {
            tmp->next = head2;
            head2=head2->next;
        }

        temp=temp->next;
    }

    if(head1 != nullptr)
        tmp->next = head1;

    if(head2 != nullptr)
        tmp->next = head2;

    head = node;
        ll2.head = nullptr;
}
