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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *cur = l1, *cur2 = l2, *tail = l1, *tail2 = l2;
        int sum;
        bool g = false;
        int f = 0, s = 0, a = 0;
        for (; cur != NULL; cur = cur->next) {
            f++;
            tail = cur;
        }
        for (; cur2 != NULL; cur2 = cur2->next) {
            s++;
            tail2 = cur2;
        }
        cout << f << s << endl;
        a = (f > s) ? (f - s) : (s - f);
        if (f > s) {

            for (int i = 0; i < a; i++) {
                ListNode* n = new ListNode(0);
                tail2->next = n;
                tail2 = tail2->next;
            }

        } else {
            for (int i = 0; i < a; i++) {
                ListNode* n = new ListNode(0);

                tail->next = n;

                tail = tail->next;
            }
        }
        cur = l1;
        cur2 = l2;
        for (; (cur != NULL && cur2 != NULL);
             cur = cur->next, cur2 = cur2->next) {

            sum = cur->val + cur2->val;

            if (g) {
                sum = sum + 1;

                g = false;
            }
            if (sum > 9) {
                g = true;
                sum = sum % 10;
            }
            cur->val = sum;
            if (cur->next == NULL && g == true) {
                ListNode* first = new ListNode(1);
                cur->next = first;
            }
            cout << sum << endl;
            sum = 0;
        }
        return l1;
    }
};