// Fig. 3.10: GradeBook.java
// GradeBook class with a constructor to initialize the course name.

public class GradeBook {
	public static void main(String[] args) {
		GradeBook myGradeBook = new GradeBook("CS101 Introduction to Java Programming");
		myGradeBook.displayMessage();
	}
    private String courseName; // course name for this GradeBook

    // constructor initializes courseName with String supplied as argument
    public GradeBook(String name) {
        courseName = name; // initializes courseName
    } // end constructor

    // method to set the course name
    public void setCourseName(String name) {
        courseName = name; // store the course name
    } // end method setCourseName

    // method to retrieve the course name
    public String getCourseName() {
        return courseName;
    }
	public void displayMessage() {
		System.out.printf("Welcome to the grade book for\n%s!\n", courseName);
	}
}
