/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode *cur = headA, *cur2 = headB;
        unordered_map<ListNode*, int>map;
        while (cur != NULL) {
            map[cur]++;
            cur=cur->next;
        }
        while (cur2 != NULL) {
            map[cur2]++;
            cur2=cur2->next;
        }
        cur = headA;
        while (cur != NULL) {
            if (map[cur] > 1) {
                return cur;
            }
            cur=cur->next;
        }

        return NULL;
    }
};