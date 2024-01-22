public class BinaryConversion {

	static String binaryConversion(int n){
		String a = new String("");
		while (n != 0){
			a = n % 2 + a;
			n /= 2;
		}
		return a;
	}

	public static void main (String[] args){
		System.out.printf("11 : %s\n", binaryConversion(11));
		System.out.printf("8 : %s\n", binaryConversion(8));
		System.out.printf("21 : %s\n", binaryConversion(21));
	}
}
