public class RationalTest {
	public static void main(String[] args){
		try{
				Rational	r1 = new Rational(2,4);
				Rational	r2 = new Rational(2,4);

				System.out.println(r1.add(r2));
				System.out.println(r1.multiply(r2));
				//System.out.println(new Rational(2,0));
				System.gc();
				System.out.println(Rational.getCreation());


		} catch (IllegalArgumentException e){
			System.out.printf("%s\n",e);
		}
	}
}
