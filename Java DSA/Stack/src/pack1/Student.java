package pack1;

public class Student {

	private int roll;
	private String Name;
	
	public Student(int roll, String name) {
		super();
		this.roll = roll;
		Name = name;
	}

	@Override
	public String toString() {
		return "Student [roll=" + roll + ", Name=" + Name + "]";
	}
	
	
	
}
