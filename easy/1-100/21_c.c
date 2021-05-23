/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if (l1 == NULL && l2 == NULL)
        return l1;
    else if (l1 == NULL)
        return l2;
    else if (l2 == NULL)
        return l1;
    
    struct ListNode * curr_node = NULL, *rt_l = NULL;
    while (l1 != NULL && l2 != NULL) {
        if (l1->val <= l2->val) {
            if (rt_l == NULL) {
                rt_l = l1;
                curr_node = l1;
                l1 = l1->next;
            }
            else {
                curr_node->next = l1;
                l1 = l1->next;
                curr_node = curr_node->next; 
            }
        }
        else {
            if (rt_l == NULL) {
                rt_l = l2;
                curr_node = l2;
                l2 = l2->next;
            }
            else {
                curr_node->next = l2;
                l2 = l2->next;
                curr_node = curr_node->next; 
            }
        }
    }

    if (l1 == NULL)
        curr_node->next = l2;
    else
        curr_node->next = l1;
    
    return rt_l;
}