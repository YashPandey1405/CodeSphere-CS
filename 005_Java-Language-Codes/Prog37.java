
// Ques1 Of Lab-10.....
import java.io.*;
import java.util.*;

public class Prog37 {
    public static void main(String args[]) {
        try {
            File myFile = new File("Yash.txt");
            myFile.createNewFile();
            FileWriter WriteFile = new FileWriter("Yash.txt");
            WriteFile.write("Hello I Am Yash Pandey\nI Am 20 Years Old\n");
            WriteFile.write("I Am In 2nd Year Of B.Tech At MAIT");
            WriteFile.close();
            Scanner sc = new Scanner(myFile);
            while (sc.hasNextLine()) {
                String line = sc.nextLine();
                System.out.println(line);
            }
            sc.close();
            myFile.delete();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
