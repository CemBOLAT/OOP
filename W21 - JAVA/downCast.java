class Superclass {
	private int x;

	public Superclass(int x) {
		this.x = x;
	}

	public int getX() {
		return x;
	}

	public void setX(int x) {
		this.x = x;
		System.out.println("setX in Superclass");
	}
	void print() {
		System.out.println("print in Superclass");
	}
}


class SubClass1 extends Superclass {
	private int y;

	public SubClass1(int x, int y) {
		super(x);
		this.y = y;
	}

	public int getY() {
		return y;
	}

	public void setY(int y) {
		super.setX(y);
		this.y = y;
		System.out.println("setY in SubClass1");
	}

	void print() {
		System.out.println("print in SubClass1");
	}
}

class SubClass2 extends Superclass {
	private int z;

	public SubClass2(int x, int z) {
		super(x);
		this.z = z;
	}

	public int getZ() {
		return z;
	}

	public void setZ(int z) {
		super.setX(z);
		this.z = z;
		System.out.println("setZ in SubClass2");
	}
	void print() {
		System.out.println("print in SubClass2");
	}
}

public class downCast {
	public static void main(String[] args){
		Superclass[] arr = new Superclass[5];

		arr[0] = new SubClass1(2,6);
		arr[1] = new SubClass2(25,61);
		arr[2] = new Superclass(82);
		arr[3] = new SubClass2(552,645);
		arr[4] = new SubClass1(12,16);

		for (var element : arr){
			if (element instanceof SubClass1){
				System.out.printf("I am there as SubClass1\n");
			}
			else if (element instanceof SubClass2){
				System.out.print("I am there as SubClass2\n");
			}
			//element.print();
			System.out.printf("--> %s\n",element.getClass().getName());
		}
	}
}
