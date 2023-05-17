package moyi0320;

public class Circle extends Shape {
	private double r ;
	private double PI = 3.14 ; 
	
	
	//gouzhao
	public Circle() {
	}
	public Circle(double r,String color) {
		this.r = r;
		setS( r * r * PI );
		setC( 2 * PI * r );
		setColor( color );
		
	}
	
	
	//set
	public void setR(double r) {
		if(r > 0 ) {
			this.r = r;
			setS( r * r * PI );
			setC( 2 * PI * r );
		}
		
		else 
			System.out.println("数据异常");
	}
	
	
	//get
	public double getR() {
		return r;
	}

	//打印
	public void show() {
		System.out.print("这个圆的半径："+this.r);
		System.out.print("，周长："+getC());
		System.out.print("，面积："+getS());
		System.out.println("，它的颜色："+getColor());
	}
	
}
