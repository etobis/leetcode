public class Solution {
    public int singleNumber(int[] A) {
	int result = 0;
	for (final int x : A) {
	    result ^= x;
	}
	return result;
    }
}