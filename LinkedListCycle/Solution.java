public class Solution {
    public boolean hasCycle(ListNode head) {
        if (head == null) {
            return false;
        }
        ListNode byOne = head.next;
        ListNode byTwo = byOne;
        if (byTwo == null) {
            return false;
        }
        byTwo = byTwo.next;
        while (true) {
            if (byTwo == null || byTwo == byOne) {
                break;
            }
            byTwo = byTwo.next;
            if (byTwo == null || byTwo == byOne) {
                break;
            }
            byTwo = byTwo.next;
            if (byTwo == null || byTwo == byOne) {
                break;
            }
            byOne = byOne.next;
        }
        return byTwo != null;        
    }
}
