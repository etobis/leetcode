class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL) {
            return false;
        }
        ListNode *byOne = head->next;
        ListNode *byTwo = byOne;
        if (byTwo == NULL) {
            return false;
        }
        byTwo = byTwo->next;
        while (byTwo && byTwo != byOne &&
                (byTwo = byTwo->next) && byTwo != byOne &&
                (byTwo = byTwo->next) && byTwo != byOne &&
                (byOne = byOne->next))
                ;
        return byTwo != NULL;
    }
};
