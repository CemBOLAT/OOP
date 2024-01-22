// Time2.java
// Time2 class declaration with overloaded constructors.

public class Time2 {
    private int hour;   // 0 - 23
    private int minute; // 0 - 59
    private int second; // 0 - 59

    // Time2 no-argument constructor: initializes each instance variable
    // to zero; ensures that Time2 objects start in a consistent state
    public Time2() {
        setTime(0, 0, 0); // invoke setTime to validate time
    } // end Time2 no-argument constructor

    // Time2 constructor: hour supplied, minute and second defaulted to 0
    public Time2(int h) {
        this(h, 0, 0); // invoke Time2 constructor with three arguments
    } // end Time2 one-argument constructor

    // Time2 constructor: hour and minute supplied, second defaulted to 0
    public Time2(int h, int m) {
        this(h, m, 0); // invoke Time2 constructor with three arguments
    } // end Time2 two-argument constructor

    // Time2 constructor: hour, minute, and second supplied
    public Time2(int h, int m, int s) {
        setTime(h, m, s); // invoke setTime to validate time and set values
    } // end Time2 three-argument constructor

    // Time2 constructor: another Time2 object supplied
    public Time2(Time2 time) {
        // invoke Time2 three-argument constructor
        this(time.getHour(), time.getMinute(), time.getSecond());
    } // end Time2 constructor with a Time2 object argument

    // Set a new time value using universal time; ensure that
    // the data remains consistent by leaving the object
    // in a consistent state.
    public void setTime(int h, int m, int s) {
        setHour(h);   // set the hour
        setMinute(m); // set the minute
        setSecond(s); // set the second
    } // end method setTime

    // Set the hour
    public void setHour(int h) {
        hour = ((h >= 0 && h < 24) ? h : 0);
    } // end method setHour

    // Set the minute
    public void setMinute(int m) {
        minute = ((m >= 0 && m < 60) ? m : 0);
    } // end method setMinute

    // Set the second
    public void setSecond(int s) {
        second = ((s >= 0 && s < 60) ? s : 0);
    } // end method setSecond

    // Get the hour
    public int getHour() {
        return hour;
    } // end method getHour

    // Get the minute
    public int getMinute() {
        return minute;
    } // end method getMinute

    // Get the second
    public int getSecond() {
        return second;
    } // end method getSecond

    // Convert to String in universal-time format (HH:MM:SS)
    public String toUniversalString() {
        return String.format("%02d:%02d:%02d", getHour(), getMinute(), getSecond());
    } // end method toUniversalString

    // Convert to String in standard-time format (H:MM:SS AM or PM)
    public String toString() {
        return String.format("%d:%02d:%02d %s",
                ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12),
                getMinute(), getSecond(), (getHour() < 12 ? "AM" : "PM"));
    } // end method toString


    public static void main(String[] args){
        Time2 t1 = new Time2(); // 00:00:00
        Time2 t2 = new Time2(2); // 02:00:00
        Time2 t3 = new Time2(21, 34); // 21:34:00
        Time2 t4 = new Time2(12, 25, 42); // 12:25:42
        Time2 t5 = new Time2(t4); // 12:25:42

        System.out.println("Constructed with:");

        // attempt to initialize t6 with invalid values
        try {
            Time2 t6 = new Time2(27, 74, 99); // invalid values
        } catch (IllegalArgumentException e) {
            System.out.printf("%nException while initializing t6: %s%n", e.getMessage());
        }
    } // end main
} // end class Time2
