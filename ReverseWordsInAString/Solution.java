public class Solution {
    public String reverseWords(String s) {
        List<String> words = new ArrayList<>();
        java.util.StringTokenizer tokenizer = new java.util.StringTokenizer(s);
        while (tokenizer.hasMoreTokens()) {
            words.add(tokenizer.nextToken());
        }
        StringBuilder output = new StringBuilder();
        java.util.Collections.reverse(words);
        for (final String word : words) {
            if (output.length() != 0) {
                output.append(" ");
            }
            output.append(word);
        }
        return output.toString();
    }
}