public class Person implements Cloneable, Comparable<Person> {
    private String name;
    private int age;

    // Constructor
    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    // Getters and setters (omitted for brevity)
	public int getInt(){
		return age;
	}
	public String getName(){
		return name;
	}
    // Implementing the compareTo method from Comparable interface
    @Override
    public int compareTo(Person otherPerson) {
        // Compare based on age
        return Integer.compare(this.age, otherPerson.age);

        // If you want to compare based on name instead, you can use:
        // return this.name.compareTo(otherPerson.name);
    }

    // Implementing the clone method from Cloneable interface
    @Override
    public Person clone() {
		try{
			Person 	copy = (Person)super.clone();
			return copy;
		} catch (CloneNotSupportedException e){
			return null;
		}
    }

    // Example of usage
    public static void main(String[] args) {

        Person person1 = new Person("Alice", 25);
        // Cloning the person
        Person person2 = (Person) person1.clone();
        // Comparing cloned persons
        int result = person1.compareTo(person2);
        if (result < 0) {
            System.out.println(person1.getName() + " is younger than " + person2.getName());
        } else if (result > 0) {
            System.out.println(person1.getName() + " is older than " + person2.getName());
        } else {
            System.out.println(person1.getName() + " and " + person2.getName() + " are of the same age.");
        }
    }
}
