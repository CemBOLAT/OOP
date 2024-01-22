public class IntSwapExample {

    public static void main(String[] args) {
        int a = 5;
        int b = 10;

        System.out.println("Before swap: a = " + a + ", b = " + b);

        // Call the swap function
        swap(a, b);

        System.out.println("After swap: a = " + a + ", b = " + b);
    }

    // Swap function for integers
    public static void swap(int x, int y) {
        // Use a temporary variable to perform the swap
        int temp = x;
        x = y;
        y = temp;
    }
}
