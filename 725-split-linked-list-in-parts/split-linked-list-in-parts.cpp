class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int N = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            N++;
            temp = temp->next;
        }
        int partSize = N / k;
        int extra = N % k;
        vector<ListNode*> ans;
        ListNode* curr = head;
        for (int i = 0; i < k; i++) {
            if (curr == NULL) {
                ans.push_back(NULL);
                continue;
            }
            ans.push_back(curr);
            int currentSize = partSize;
            if (extra > 0) {
                currentSize++;
                extra--;
            }
            for (int j = 1; j < currentSize; j++) {
                curr = curr->next;
            }
            ListNode* nextPart = curr->next;
            curr->next = NULL;
            curr = nextPart;
        }
        return ans;
    }
};