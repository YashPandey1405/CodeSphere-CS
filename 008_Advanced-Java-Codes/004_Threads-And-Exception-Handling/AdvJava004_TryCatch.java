public class AdvJava004_TryCatch {
    public static void main(String[] args) {
        int arr[] = { 1, 2, 3, 4, 5 };
        int n = arr.length;

        try {
            System.out.println("Currently In Try Block");
            checkArrayIndex(arr, n);
        } catch (Exception e) {
            System.out.println();
            System.out.println("\nCurrently In Catch Block");
            System.out.println(e.getMessage());
        } finally {
            System.out.println();
            System.out.println("This is finally block, Program Has Ended");
        }
    }

    public static void checkArrayIndex(int[] arr, int n) throws ArrayIndexOutOfBoundsException {
        for (int i = 0; i <= n; i++) { 
            if (i >= arr.length) {
                throw new ArrayIndexOutOfBoundsException("Array index out of bounds: " + i);
            }
            System.out.print(arr[i] + " ");
        }
    }
}
