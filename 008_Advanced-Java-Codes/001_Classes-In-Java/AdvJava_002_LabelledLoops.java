// WAP for show the use of labeled loops

public class AdvJava_002_LabelledLoops {
    public static void main(String[] args) {
        outerLoop:  // Label for outer loop
        for (int i = 1; i <= 3; i++) {
            innerLoop:  // Label for inner loop
            for (int j = 1; j <= 3; j++) {
                if (i == 2 && j == 2) {
                    System.out.println("Skipping i = " + i + ", j = " + j);
                    continue outerLoop;  // Skips to the next iteration of outer loop
                }
                System.out.println("i = " + i + ", j = " + j);
            }
        }
    }
}

