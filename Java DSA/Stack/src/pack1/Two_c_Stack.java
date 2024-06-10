package pack1;

public class Two_c_Stack {

	private int topA, topB;
	
	private int arr[];
	
	public Two_c_Stack() {
		topA=-1;
		
		topB=5;
		arr=new int [5];
	}
	
	public Two_c_Stack(int s) {
		topA=-1;
		
		topB=s;
		arr=new int [s];
	}
	
	public boolean isEmptyA()
	{
		if (topA==-1)
			return true;
		else
			return false;
	}
	
	public boolean isEmptyB()
	{
		if (topB==arr.length)
			return true;
		else
			return false;
	}
	
	public boolean isFull() 
	{
		if((topB-topA) == 1)
			return true;
		else
			return false;
	}

	public void pushA(int d)
	{
		if(isFull())
		{
			System.out.println("\n stack overflow");
			return;
		}
		topA = topA + 1;
		arr[topA]=d;
		return;
	}
	
	public void pushB(int d)
	{
		if(isFull())
		{
			System.out.println("\n stack overflow");
			return;
		}
		topB = topB - 1;
		arr[topB]=d;
		return;
	}
	
	public int popA()
	{
		int d = -999;
		if(isEmptyA())
		{
			System.out.println("\n underflow");
			return d;
		}
		
		d = arr[topA];
		topA = topA - 1;
		return d;
	}
	public int popB()
	{
		int d = -999;
		if(isEmptyB())
		{
			System.out.println("\n underflow");
			return d;
		}
		
		d = arr[topB];
		topB = topB - 1;
		return d;
	}
	
	public int peekA()
	{
		int d = -999;
		if(isEmptyA())
		{
			System.out.println("\n underflow");
			return d;
			
		}
		d = arr[topA];
		return d;
	}
	
	
	public static void main(String[] args) {
		
		
		Two_c_Stack c = new Two_c_Stack();
		c.pushA(45);
		c.pushA(7);
		c.pushA(18);
		c.pushB(1);
		c.pushB(55);
		c.pushB(100);
		
		int data= c.peekA();
		System.out.println(data);
		
		boolean full=c.isFull();
		System.out.println(full);
		
	}
	
}
