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
    ListNode* insertionSortList(ListNode* head) {
         vector<int> arr;
    ListNode* temp = head;
    while(temp!= NULL){
        arr.push_back(temp->val);
        temp= temp->next;
    }
    sort(arr.begin(),arr.end());
    int i=0;
    ListNode* New= head;
    while(New!=NULL){
        New->val= arr[i];
        i=i+1;
        New=New->next;
    }
    return head;
    }
};