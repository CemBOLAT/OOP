
public class testJavaVector {
	@SuppressWarnings("unchecked")
	public static void main(String[] args){
		JavaVector v = new JavaVector();
		try {
			for (int i = 0; i < 10; i++) {
			v.Add(i * 2);
			}
			v.Remove(4);
			v.Remove(62);
		}
		catch (Exception e) {
			System.out.println(e);
		} finally {
			System.out.println(v);
			System.out.println("Done");
		}
	}
}
