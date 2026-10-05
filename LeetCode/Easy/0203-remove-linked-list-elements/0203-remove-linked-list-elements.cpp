class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head != NULL && head->val == val)
        {
            head = head->next;
        }
        ListNode* curr = head;
        while(curr != NULL && curr->next != NULL)
        {   ListNode* next = curr->next;
            if(curr->next->val == val)
            {
                curr->next = curr->next->next;
                
            }
            else
            {
                curr = curr->next;
            }
        }
        return head;

    }
};