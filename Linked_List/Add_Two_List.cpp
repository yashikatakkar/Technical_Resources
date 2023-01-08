Node * addTwoLists(Node * first, Node * second) {
  Node * res = NULL;
  Node * temp;
  Node * prev = NULL;
  int carry = 0, sum = 0;
  while (first != NULL || second != NULL) {
    sum = carry;
    sum += first != NULL ? first -> data : 0;
    sum += second != NULL ? second -> data : 0;
    if (sum >= 10) {
      carry = 1;
    } else {
      carry = 0;
    }
    sum %= 10;
    temp = newNode(sum);
    if (res != NULL) {
      prev -> next = temp;
    } else {
      res = temp;
    }
    prev = temp;
    if (first) {
      first = first -> next;
    }
    if (second) {
      second = second -> next;
    }
  }

  if (carry > 0)
    temp -> next = newNode(carry);
  return res;
}

Node * Reverse_LL(Node * head) {
  if (head == NULL || head -> next == NULL) {
    return head;
  }
  Node * rest = reverse(head -> next);
  head -> next -> next = head;
  head -> next = NULL;
  return rest;
}

Node * solve(Node * list1, Node * list2) {
  list1 = Reverse_LL(list1);
  list2 = Reverse_LL(list2);
  Node * added = addTwoLists(list1, list2);
  return added;
}
