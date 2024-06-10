package pack1;

public class CharStack {
	private int top;
	private char []arr;
	
	public  CharStack()
	
	{
		top = -1;
		arr = new char[10];
	
		
	}
	
	public  CharStack(int s)
	
	{
		top = -1;
		arr = new char[s];
	}
	
	public boolean isFull() 
	{
		if(top == arr.length-1)
			return true;
		else
			return false;
	}
	public boolean isEmpty()
	{
		if (top==-1)
			return true;
		else
			return false;
	}
	public void push(char d)
	{
		if(isFull())
		{
			System.out.println("\n stack overflow");
			return;
		}
		top = top + 1;
		arr[top]=d;
		return;
	}
	
	public char pop()
	{
		char d = '2';
		if(isEmpty())
		{
			System.out.println("\n underflow");
			return d;
		}
		
		d = arr[top];
		top = top - 1;
		return d;
	}
	
	
	public char peek()
	{
		char d = '2';
		if(isEmpty())
		{
			System.out.println("\n underflow");
			return d;
			
		}
		d = arr[top];
		return d;
	}
	
	
	
	
	public static void main(String[] args) {
		CharStack m = new CharStack();
		m.push('a');
		
		m.push('b');
		m.push('c');
		m.push('d');
		m.push('e');
		
		char data=m.pop();
		System.out.println(data);
		
		

	char peek=m.peek();
		System.out .println(peek);
		
		

	}
		
	}


