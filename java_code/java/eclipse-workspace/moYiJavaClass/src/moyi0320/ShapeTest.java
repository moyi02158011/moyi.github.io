package moyi0320;

public class ShapeTest {

	public static void main(String[] args) {
		Square a = new Square(5,6,"yellow");
		Circle b = new Circle(7,"black");
		Shape c = new Square(5,5,"red");
		Shape d = new Circle(4,"pink");
		
		Shape e = new Shape(3,4,"white");
		
		printShape(a);
		printShape(b);
		printShape(c);
		printShape(d);
		printShape(e);
	}
	
	public static void printShape(Shape a) {
		a.show();
	}
}
