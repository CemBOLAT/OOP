abstract class AbstractTest {
	private int x;
	private int y;

	public AbstractTest(int x, int y) {
		setX(x);
		setY(y);
	}

	public int getX() {
		return x;
	}

	public int getY() {
		return y;
	}

	public void setX(int x) {
		this.x = x;
	}

	public void setY(int y) {
		this.y = y;
	}

	public int	add() {
		return x + y;
	}
	public abstract void print();
}

class point3D extends AbstractTest {
	private int z;

	public point3D(int x, int y, int z) {
		super(x, y);
		this.z = z;
	}

	public int getZ() {
		return z;
	}

	public void setZ(int z) {
		this.z = z;
	}

	public void print() {
		System.out.println("x: " + getX() + " y: " + getY() + " z: " + getZ());
	}
}

class point2D extends AbstractTest {
	public point2D(int x, int y) {
		super(x, y);
	}

	public void print() {
		System.out.println("x: " + getX() + " y: " + getY());
	}
}

public class testAbstract {
	public static void main(String[] args) {
		point2D p2 = new point2D(1, 2);
		point3D p3 = new point3D(1, 2, 3);

		p2.print();
		p3.print();
	}
}
