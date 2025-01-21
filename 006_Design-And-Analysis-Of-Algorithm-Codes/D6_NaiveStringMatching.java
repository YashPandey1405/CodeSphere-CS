public class D6_NaiveStringMatching {
    public static void search(String pat, String txt) {
        int M = pat.length();
        int N = txt.length();

        // Slide the pattern over the text one by one
        for (int i = 0; i <= N - M; i++) {
            int j;

            // Check for a match
            for (j = 0; j < M; j++) {
                if (txt.charAt(i + j) != pat.charAt(j)) {
                    break;
                }
            }

            // If pattern is found, print the position
            if (j == M) {
                System.out.println("Pattern found at index " + i);
            }
        }
    }

    public static void main(String[] args) {
        String txt = "ABABDABACDABABCABAB";
        String pat = "ABABCABAB";
        search(pat, txt);
    }
}
