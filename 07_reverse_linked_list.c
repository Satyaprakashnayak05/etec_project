struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev = 0;
    struct ListNode *curr = head;

    while (curr) {
        struct ListNode *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}
