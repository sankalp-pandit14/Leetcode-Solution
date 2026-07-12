class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow= head;
        while(fast!=NULL && fast->next!= NULL){
            slow= slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};//this is tortoise hare method which has a tc of O(n/2) but we can also try another approach firstly ill count the number of nodes and then find the middle one by (n/2+1) works for both even and odd then sslowly reduce it but the only problem is it has tc of O(n/2+n)