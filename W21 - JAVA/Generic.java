public class Generic{
	public static <E> void printTotal(E[] elements){
		for (E a : elements)
			System.out.printf("%s\n",a);
	}

	public static void main(String[] args){
		Integer[] intArr = {3,4,5};
		Double[] doubleArr = {3.2,4.1,5.6};

		printTotal(intArr);
		printTotal(doubleArr);
	}
}
