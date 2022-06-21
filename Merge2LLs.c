struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){ 
    if(l1 == NULL && l2 == NULL)
        return NULL;
    if(!l1)
        return l2;
    if(!l2)
        return l1;
    struct ListNode head;
    struct ListNode *s = &head;
    while(l1 && l2){
        if(l1->val >= l2->val){
            s->next = l2;
            l2 = l2->next;
            s = s->next;
        }else{
            s->next = l1;
            l1 = l1->next;
            s = s->next;
        }
    }
    if(l1)
        s->next = l1;
    if(l2)
        s->next = l2;
    return head.next;
    
}
