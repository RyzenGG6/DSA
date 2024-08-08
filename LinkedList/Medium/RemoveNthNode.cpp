  ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* cur = head;
        int t = 0;
        for (; cur != NULL; cur = cur->next) {
            t++;
        }
        cur = head;
        for (int i = 1; i < t - n; i++) {
            cur = cur->next;
        }
        // cout<<cur->val<<" next "<<cur->next->next->val;
        if(t-n==0)return head=cur->next;
        if(cur->next->next==NULL) cur->next=NULL;
        else cur->next=cur->next->next;
        return head;
    }