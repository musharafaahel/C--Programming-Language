class Rectangle
{
	int length,breadth;
	void setData(int l, int b)
	{
		length = l;
		breadth = b;	
	}
	int area()
	{
		return length*breadth;
	}
}

class RectangleMain
{
	public static void main(String args[])
	{
		Rectangle r1 = new Rectangle();
		r1.setData(5,2);
		System.out.println("Area of Rectangle = "+r1.area());
		
		Rectangle r2 = new Rectangle();
		r2.setData(10,2);
		System.out.println("Area of Rectangle = "+r2.area());
		
	}
}