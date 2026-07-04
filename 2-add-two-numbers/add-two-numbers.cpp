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
        ListNode* temp1= l1;
        ListNode* temp2= l2;
        ListNode* dummy= new ListNode(-1);// class is named as listnode not node 
        ListNode* curr= dummy;
        int  carry=0;
        while(temp1!=NULL || temp2!=NULL){
        int sum= carry;
        if(temp1) sum+= temp1->val;
        if(temp2) sum+= temp2->val;
        ListNode* ans= new ListNode(sum%10);
        carry= sum/10;
        curr->next= ans;
        curr= curr->next;
        if(temp1) temp1= temp1->next;       // agar null hua to next nahi hoga kyuki agar null pe next kia to null pointer exception
        if(temp2) temp2= temp2->next;
        }
        if(carry) {
            curr->next = new ListNode(carry);// ans nhi ayega kyuki wo to sirf ek single value store krra h jaaise sum but actual jo list node bna rha h wo h ccurr so curr 
        }
         return dummy->next ;
    }
};