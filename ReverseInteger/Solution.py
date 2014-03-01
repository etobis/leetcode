class Solution:
    # @return an integer
    def reverse(self, x):
        result = 0;
        sign = -1 if x < 0 else 1
        x = abs(x)
        while x != 0:
            result = 10 * result + (x % 10)
            x = x / 10
        result *= sign
        return result
