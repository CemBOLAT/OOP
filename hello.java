
import java.util.Scanner;

public class hello {
	public static void main(String[] args) {
		/*
		boolean b = true;
		int a[] = new int[1];
		a[0] = 2;
		int[] c;
		c = a;
		c[0] = 3;

		System.out.printf("Hello World %d\n", a[0]);*/

		String s;
		s = "Hello World";
		s = "olleH dlroW";
		//s[0] = 'H'; // error
		String s1 = new String("Hello World");
		String s2 = new String("Hello World");
		s2 = new String("olleH dlroW");
		//s2[0] = "H"; // error
		s2 = s1 + s2;
		s2 += s1;
		hello2 h = new hello2();
		hello2 h2 = h;
	}
}

class hello2 {
	public void ma2in(String[] args) {
		System.out.println("Hello World");
	}
}
