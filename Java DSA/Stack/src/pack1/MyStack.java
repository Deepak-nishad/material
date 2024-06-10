package pack1;

import java.util.Scanner;

public class MyStack {
	private int top;
	private int[] arr;

	public MyStack()

	{
		top = -1;
		arr = new int[10];

	}

	public MyStack(int s) {
		top = -1;
		arr = new int[s];
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

	public void push(int d) {
		if (isFull()) {
			System.out.println("\n stack overflow");
			return;
		}
		top = top + 1;
		arr[top] = d;
		return;
	}

	public int pop() {
		int d = -999;
		if (isEmpty()) {
			System.out.println("\n underflow");
			return d;
		}

		d = arr[top];
		top = top - 1;
		return d;
	}

	public int peek() {
		int d = -999;
		if (isEmpty()) {
			System.out.println("\n underflow");
			return d;

		}
		d = arr[top];
		return d;
	}

	public static void main(String[] args) {
		MyStack m = new MyStack();
		Scanner scanner = new Scanner(System.in);

		while (true) {
			System.out.println("1. Push");
			System.out.println("2. Pop");
			System.out.println("3. Peek");
			System.out.println("4. Check if empty");
			System.out.println("5. Check if full");
			System.out.println("6. Exit");
			System.out.print("Enter your choice: ");
			int choice = scanner.nextInt();

			switch (choice) {
			case 1:
				System.out.print("Enter the value to push: ");
				int value = scanner.nextInt();
				m.push(value);
				break;
			case 2:
				if (!m.isEmpty()) {
					int poppedValue = m.pop();
					System.out.println("Popped value: " + poppedValue);
				} else {
					System.out.println("Stack is empty");
				}
				break;
			case 3:
				if (!m.isEmpty()) {
					int peekValue = m.peek();
					System.out.println("Peek value: " + peekValue);
				} else {
					System.out.println("Stack is empty");
				}
				break;
			case 4:
				if (m.isEmpty()) {
					System.out.println("Stack is empty");
				} else {
					System.out.println("Stack is not empty");
				}
				break;
			case 5:
				if (m.isFull()) {
					System.out.println("Stack is full");
				} else {
					System.out.println("Stack is not full");
				}
				break;
			case 6:
				System.exit(0);
			default:
				System.out.println("Invalid choice. Please try again.");
			}
		}
	}
}
