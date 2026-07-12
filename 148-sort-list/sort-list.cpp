class Solution {
public:
    ListNode* sortList(ListNode* head) {
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