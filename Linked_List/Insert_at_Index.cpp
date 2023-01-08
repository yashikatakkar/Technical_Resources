class ListNode {
  public:
    int val;
  ListNode * next;
  ListNode(int x) {
    val = x;
    next = NULL;
  }
};
int length(ListNode * head){
    int count = 0;
    ListNode * temp = head;
    while(temp != nullptr){
        count++
    }

}
void Insertion_at_postion(int val, int pos, ListNode * head ){
    ListNode * newnode = new ListNode(val);
    ListNode * temp = head;
    if(pos == 0){
        newnode->next = head;
        head = newnode;
    }
    if(pos > length()){
        exit(1);
    }
        
    else{
        while(--pos){
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
       } 

}
