public class Rational implements Comparable<Object> {
    private int numerator;
    private int denominator;
    private static int creation = 0;

    public Rational() {
        this(1, 1);
    }

    public Rational(int n, int d) throws IllegalArgumentException {
        setN(n);
        setD(d);
        if (d == 0)
            throw new IllegalArgumentException("denominator is equal to 0");
        creation++;
    }

    public int getN() {
        return numerator;
    }

    public int getD() {
        return denominator;
    }

    public void setN(int n) {
        numerator = n;
    }

    public void setD(int d) throws IllegalArgumentException {
        denominator = d;
        if (d == 0)
            throw new IllegalArgumentException("denominator is equal to 0");
    }

    public static int getCreation() {
        return creation;
    }

    @Override
    public String toString() {
        return String.format("%d / %d", numerator, denominator);
    }

    public Rational add(Rational ra) {
        return new Rational((ra.denominator * numerator) + (ra.numerator * denominator), ra.denominator * denominator);
    }

    public Rational multiply(Rational ra) {
        return new Rational(ra.numerator * numerator, ra.denominator * denominator);
    }
    @Override
    protected void finalize() throws Throwable {
        try {
			creation--;
            System.out.println("Finalizing Rational object");
        } finally {
            super.finalize();
        }
    }
    @Override
    public int compareTo(Object obj) {
        if (!(obj instanceof Rational)) {
            throw new ClassCastException("A Rational object expected.");
        }
        Rational ra = (Rational) obj;

        int n1 = numerator * ra.denominator;
        int n2 = ra.numerator * denominator;

        return Integer.compare(n1, n2);
    }
}
