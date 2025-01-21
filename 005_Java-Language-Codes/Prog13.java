import java.util.*;

public class Prog13 {
    public static void Reverse_Matrix(int[][] Matrix) {
        int Rows = (Matrix.length - 1), Cols = (Matrix[0].length - 1);
        int ptr1 = 0, ptr2 = Rows;
        while (ptr1 <= ptr2) {
            for (int i = 0; i <= Cols; i++) {
                int temp = Matrix[ptr1][i];
                Matrix[ptr1][i] = Matrix[ptr2][Cols - i];
                Matrix[ptr2][Cols - i] = temp;
            }
            ptr1++;
            ptr2--;
        }
    }

    public static void Display(int[][] Matrix) {
        for (int i = 0; i < Matrix.length; i++) {
            for (int j = 0; j < Matrix[0].length; j++) {
                System.out.print(Matrix[i][j] + "  ");
            }
            System.out.println();
        }
    }

    public static void main(String args[]) {
        int[][] Matrix = { { 1, 2 }, { 4, 5 } };
        System.out.println("Before Swap , The 2X2 Matrix IS ::: ");
        Display(Matrix);
        Reverse_Matrix(Matrix);
        System.out.println("After Swap , The 2X2 Matrix IS ::: ");
        Display(Matrix);
    }
}
