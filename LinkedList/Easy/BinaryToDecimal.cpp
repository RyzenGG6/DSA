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
int binaryToDecimal(const std::string& binaryStr) {
    int dec_value = 0;
    int base = 1; // 2^0

    for (int i = binaryStr.length() - 1; i >= 0; --i) {
        if (binaryStr[i] == '1') {
            dec_value += base;
        }
        base *= 2;
    }

    return dec_value;
}
    int getDecimalValue(ListNode* head) {
        long long num;
        if (head == NULL)
            return 0;
        string s = "";
        ListNode* cur = head;
        while (cur != NULL) {
            if (cur != NULL)
                s.append(to_string(cur->val));

            cur = cur->next;
        }
       
        return binaryToDecimal(s);
    }
};