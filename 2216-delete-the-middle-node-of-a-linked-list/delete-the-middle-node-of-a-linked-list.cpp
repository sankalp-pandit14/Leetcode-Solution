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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head->next == NULL)
         return NULL;
        ListNode* slow= head;
        ListNode* fast= head;
        ListNode* prev= NULL;
        while(fast!=NULL && fast->next!=NULL){
            prev= slow;          // this at first coz after this when slow reaches middle but we dont want to go to middle
            slow= slow->next;
            fast= fast->next->next;
        }
        prev->next= slow->next;      // this moves the rest 
        return head; // simplehai hum start krte h head aur jaise ki head  me koi change nhi hai aur hum prev ka connection chNGE KRRE H JO SLOW KA NEXT ME SE CONNECT HO JAT Hai to jab me head return krra hu to wo pura  new link ke saath return krra h which is there in memory address 
    }
};