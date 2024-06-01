void deleteNode(ListNode* node) {
    node->val = node->next->val;
    node->next = node->next->next;

}
// T.C.= O(1)
// S.C.= O(1)
