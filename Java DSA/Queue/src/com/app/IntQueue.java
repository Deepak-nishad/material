package com.app;

public class IntQueue {
	int front, rear;
	int arr[];

	public IntQueue() {
		front = rear = -1;
		arr = new int[10];

	}

	public IntQueue(int size) {
		System.out.println("constructor callesd and set size to queue");
		front = rear = -1;
		arr = new int[size];
	}

	public boolean isFull() {
		if (rear == arr.length - 1)
			return true;
		else
			return false;
	}
	
	public boolean isEmpty()
	{
		System.out.println(front);
	if((front==-1) || (front ==rear+1))
		return true;
	else
		return false;	
	}
	
	public void insert(int data)
	{
		if(isFull())
		{
			System.out.println("Full...............");
			return ;
		}
		if(front==-1)
		front=0;
		rear=rear+1;
		arr[rear]=data;
		return ;
	}
	
	public int remove()
	{
		int d=-999;
		if(isEmpty())
		{
			System.out.println("\nEmpty...............");
			return d;
		}
		
		d=arr[front];
		front=front+1;
		return d;
		
	}
	
	public static void main(String[] args) {
		
		IntQueue obj= new IntQueue(6);
		obj.insert(10);
		obj.insert(20);
		obj.insert(50);
		obj.insert(60);
		obj.insert(60);
		obj.insert(70);
 		int data= obj.remove();
		System.out.println(data);
		int data1= obj.remove();
		System.out.println(data1);
		int data2= obj.remove();
		System.out.println(data2);
		int data3= obj.remove();
		System.out.println(data3);
		int data4= obj.remove();
		System.out.println(data4);
		int data5= obj.remove();
		System.out.println(data5);
		obj.insert(60);
		
	}

}
