import java.util.Arrays;
import java.util.Scanner;

public class Prog16 {
    int amount;
    int[] denom;

    Prog16() {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the amount:");
        amount = input.nextInt();
        System.out.print("Enter the number of denominations:");
        denom = new int[input.nextInt()];
        System.out.println("Enter the denomination");
        for (int i = 0; i < denom.length; i++) {
            denom[i] = input.nextInt();
        }
        Arrays.sort(denom);
    }

    int count() {
        int[] output = notes();
        int sum = 0;
        for (int i = 0; i < output.length; i++) {
            sum += output[i];
        }
        return sum;
    }

    int[] notes() {
        int[] result = new int[denom.length];
        int i = 0;
        while (i < denom.length - 1) {
            int j = 1;
            while ((amount - denom[i] * j) % denom[i + 1] != 0) {
                j++;
            }
            result[i] = j;
            amount -= denom[i] * j;
            i++;
        }
        result[i] = amount / denom[i]; // Assuming amount is divisible by the last denom
        return result;

    }

    Prog16(int amount) {
        this.amount = amount;
        this.denom = new int[] { 10, 20, 50, 100, 500 };

    }

    public static void main(String[] args) {
        Prog16 t1 = new Prog16();
        System.out.println(Arrays.toString(t1.notes()));
    }
}
