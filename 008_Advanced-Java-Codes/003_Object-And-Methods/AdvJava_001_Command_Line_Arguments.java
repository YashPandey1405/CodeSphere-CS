// WAP to show commands line arguments

public class AdvJava_001_Command_Line_Arguments {
    public static void main(String[] args) {
        if (args.length > 0) {
            System.out.println("Command Line Arguments: ");
            for (int i = 0; i < args.length; i++) {
                System.out.println("Argument " + (i + 1) + ": " + args[i]);
            }
        } else {
            System.out.println("No command line arguments passed.");
        }
    }
}

// javac <FileName>.java
// java <FileName> arg1 arg2 arg3
