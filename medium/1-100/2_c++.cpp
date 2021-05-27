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
        int advance = 0;
        int val = (((l1 == nullptr)?0:l1->val) + ((l2 == nullptr)?0:l2->val) + advance) % 10;
        ListNode *sum = new ListNode(val), *cur = sum;
        advance = (((l1 == nullptr)?0:l1->val) + ((l2 == nullptr)?0:l2->val) + advance) / 10;
        l1 = l1->next;
        l2 = l2->next;
        while (l1 != nullptr || l2 != nullptr) {
            val = (((l1 == nullptr)?0:l1->val) + ((l2 == nullptr)?0:l2->val) + advance) % 10; 
            ListNode *newNode = new ListNode(val);
            cur->next = newNode;
            cur = newNode;
            advance = (((l1 == nullptr)?0:l1->val) + ((l2 == nullptr)?0:l2->val) + advance) / 10;
            l1 = (l1 == nullptr)?nullptr:l1->next;
            l2 = (l2 == nullptr)?nullptr:l2->next;
        }
        if (advance == 1) {
            ListNode *newNode = new ListNode(1);
            cur->next = newNode;
        }
        return sum;
    }
};