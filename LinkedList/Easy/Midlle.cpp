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
    ListNode* middleNode(ListNode* head) {
        ListNode* cur = head;
        stack<ListNode*> nodeStack;
        ListNode* node;
        int c = 1, size = 0;

        while (cur != NULL) {
            nodeStack.push(cur);
            size++;
            cur = cur->next;
        }
        cout << size;
        int n = size;
        node = nodeStack.top();
        cur = head;
        while (cur != NULL && !nodeStack.empty()) {
            cout << c << " " << n << endl;
            if (c == n) {
                head = node;
                break;
            } else if (c > n) {
                head = cur;
                break;
            }

            cur = cur->next;
            c++;

            nodeStack.pop();
            node = nodeStack.top();

            n--;
        }
        return head;
    }
};