package pack1;

public class StudentStack {

	
	private int top;
	private Student[] arr;

	public StudentStack()

	{
		top = -1;
		arr = new Student[3];

	}

	public StudentStack(int s) {
		top = -1;
		arr = new Student[s];
	}

	public boolean isFull() {
		if (top == arr.length - 1)
			return true;
		else
			return false;
	}

	public boolean isEmpty() {
		if (top == -1)
			return true;
		else
			return false;
	}

	public void push(Student d) {
		if (isFull()) {
			System.out.println("\n stack overflow");
			return;
		}
		top = top + 1;
		arr[top] = d;
		return;
	}

	public Student pop() {
		Student d = null;
		if (isEmpty()) {
			System.out.println("\n underflow");
			return d;
		}

		d = arr[top];
		top = top - 1;
		return d;
	}

	public Student peek() {
		Student d = null;
		if (isEmpty()) {
			System.out.println("\n underflow");
			return d;

		}
		d = arr[top];
		return d;
	}
}
