class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        auto slow = head, fast = head;
        while(fast && fast->next){
            fast = fast -> next -> next;
            slow = slow->next;
        }
        return slow;
    }
};