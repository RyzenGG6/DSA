  bool hasCycle(ListNode* head) {
        if (head == NULL)
            return false;
        if (head->next == NULL)
            return false;
        ListNode* fast = head->next->next;
        ListNode* slow = head;
        // ListNode* cur = head;
        // int ans=0;

        while (fast != NULL) {
            if (slow == fast)
                return true;
            slow = slow->next;
            if (fast->next == NULL || fast->next->next == NULL)
                return false;

            else
                fast = fast->next->next;
        }
        return false;
    }