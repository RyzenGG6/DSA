/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int v) {
        ListNode *p = NULL, *cur;

        for (cur = head; cur != NULL; cur = cur->next) {
          
            if (cur->val == v) {
                if (cur == head) {
                    head = cur->next;
                } else {
                    if (cur->next == NULL) {
                        p->next = NULL;
                        // break;
                    }
                   else {
                    for (cur = cur->next; cur->val == v; cur = cur->next) {

                        if (cur->next == NULL) {
                            cout<<cur->val;
                            p->next = NULL;
                            return head;
                        }
                    }

                    p->next = cur;
                   
                }
                }
            }
            p = cur;
            //    cout<<"Iteration "<<p->val<<endl;
        }

        return head;
    }
};