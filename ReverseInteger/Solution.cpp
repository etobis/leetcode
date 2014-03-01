#include <cstdlib>

class Solution {
public:
    int reverse(int x) {
      const int sign = x < 0 ? -1 : 1;
      int result = 0;
      x = std::abs(x);
      while (x != 0) {
	result = 10 * result + (x % 10);
	x /= 10;
      }
      result *= sign;
      return result;
    }
};
