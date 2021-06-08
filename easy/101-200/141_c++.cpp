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
    bool hasCycle(ListNode *head) {
        ListNode *currNode = head;
        if (currNode == NULL)
            return false;
        ListNode *fastNode = head;
        while (currNode != NULL && fastNode != NULL) {
            if (fastNode->next != NULL)
                fastNode = fastNode->next;
            else
                return false;
            
            if (fastNode->next != NULL)
                fastNode = fastNode->next;
            else
                return false;

            if (currNode->next != NULL)
                currNode = currNode->next;
            else
                return false;
            
            if (currNode == fastNode) {
                return true;
            }
        }
        return false;
    }
};