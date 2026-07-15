class Solution {
public:

    ListNode* ReverseList(ListNode* head){

        if(head==NULL || head->next==NULL)
            return head;

        ListNode* NewHead = ReverseList(head->next);

        head->next->next = head;
        head->next = NULL;

        return NewHead;
    }

    bool isPalindrome(ListNode* head) {

        if(head==NULL || head->next==NULL)
            return true;

        ListNode* slow=head;
        ListNode* fast=head;

       while(fast->next != NULL && fast->next->next != NULL){
    slow = slow->next;
    fast = fast->next->next;
}

        ListNode* NewHead = ReverseList(slow->next);

        ListNode* first=head;
        ListNode* second=NewHead;

        while(second!=NULL){

            if(first->val!=second->val)
                return false;

            first=first->next;
            second=second->next;
        }

        return true;
    }
};