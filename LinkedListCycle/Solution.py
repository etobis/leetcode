class Solution:
    # @param head, a ListNode
    # @return a boolean
    def hasCycle(self, head):
        if head is None:
            return False
        byOne = head.next
        byTwo = head.next
        if byTwo is None:
            return False
        byTwo = byTwo.next;
        while True:
            if byTwo is None or byTwo == byOne:
                break
            byTwo = byTwo.next
            if byTwo is None or byTwo == byOne:
                break
            byTwo = byTwo.next
            if byTwo is None or byTwo == byOne:
                break
            byOne = byOne.next
        return byTwo is not None
