package com.app;

public class CircularQueue {
	int front, rear;
	int[] arr;

	public CircularQueue() {
		front = rear = -1;
		arr = new int[5];

	}

	public CircularQueue(int size) {
		System.out.println("paramentrised called");
		front = rear = -1;
		System.out.println(front);
		System.out.println(rear);
		arr = new int[size];
		System.out.println("size of array" + arr.length);
	}

	public boolean isEmpty() {
		if (front == -1)
			return true;
		else
			return false;
	}

	public boolean isFull() {

		if ((front == 0) && (rear == arr.length - 1) || (front == rear + 1)) {
			return true;
		} else {
			return false;
		}

	}

	public void insert(int d) {
		if (isFull()) {
			System.out.println("\n full");
			return;
		}
		if (front == -1) {

			front = 0;
			System.out.println("frist time value insert" + front);
		}
		if (rear == arr.length - 1) {
			rear = 0;
			System.out.println("if executed when condition is rear==arr.length-1  value of rear is " + front);
		}

		else {
			rear = rear + 1;
			arr[rear] = d;
			System.out.println("else executed rear point to -> " + rear);
			return;
		}

	}

	public int remove() {
		int d1 = -999;
		if (isEmpty()) {
			System.out.println("\n empty");
			return d1;
		}

		d1 = arr[front];
		if (front == rear) {
			front = -1;
			rear = -1;
		}
		else if (front == arr.length - 1) 
			front = 0;
			else	
			front = front + 1;
			return d1;

		
	
	}

	public static void main(String[] args) {
		CircularQueue q = new CircularQueue(5);
		q.insert(10);
		q.insert(20);
		q.insert(30);
		q.insert(40);
		q.insert(50);
		q.insert(50);
		int data = q.remove();
		System.out.println(data);
		int data1 = q.remove();
		System.out.println(data1);
		int data2 = q.remove();
		System.out.println(data2);
		int data3 = q.remove();
		System.out.println(data3);
		int data4 = q.remove();
		System.out.println(data4);
		int data5 = q.remove();
		System.out.println(data5);
	}

}
