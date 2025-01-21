import java.io.*;
import java.util.*;

public class Prog40 {
    public static void main(String args[]) {
        try {
            System.out.println();
            File MyFile = new File("Yash.txt");
            MyFile.createNewFile();

            FileWriter WriteFile = new FileWriter("Yash.txt");
            WriteFile.write("Hello I Am Yash Pandey\n");
            WriteFile.write("I Am 20 Years Old\n");
            WriteFile.write("I Am In 2nd Year Of B.Tech At MAIT");
            WriteFile.close();

            System.out.println("Initially , Content In 'Yash.txt' Is ::: ");

            Scanner sc = new Scanner(MyFile);
            while (sc.hasNextLine()) {
                String line = sc.nextLine();
                System.out.println(line);
            }
            sc.close();

            FileReader fileReader = new FileReader("Yash.txt");
            BufferedReader bufferedReader = new BufferedReader(fileReader);
            StringBuilder stringBuilder = new StringBuilder();
            String line;

            while ((line = bufferedReader.readLine()) != null) {
                stringBuilder.append(line.toUpperCase()).append("\n");
            }
            bufferedReader.close();

            FileWriter fileWriter = new FileWriter("Yash.txt");
            BufferedWriter bufferedWriter = new BufferedWriter(fileWriter);
            bufferedWriter.write(stringBuilder.toString());
            bufferedWriter.close();

            System.out.println();
            System.out.println("Finally , Content In 'Yash.txt' Is ::: ");

            Scanner sc2 = new Scanner(MyFile);
            while (sc2.hasNextLine()) {
                line = sc2.nextLine();
                System.out.println(line);
            }
            sc.close();
            MyFile.delete();

            System.out.println();
            System.out.println("Content converted to uppercase & written back to the file successfully.");
            System.out.println();
        } catch (IOException e) {
            System.out.println("Error reading/writing file : 'Yash.txt'");
            e.printStackTrace();
        }
    }
}
