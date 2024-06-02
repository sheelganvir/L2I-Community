ListNode* reverseList(ListNode* head) {
    ListNode* prevptr = NULL;
    ListNode* currptr = head;

    while(currptr != NULL){
        ListNode* nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }

    ListNode* new_head = prevptr;

    return new_head;
        
}
// T.C.= O(n)   S.C.= O(1)
