package circle;

public class Circle {

	public double r;
	public double s;
	public double PI = 3.14;
	
	//构造方法
	public Circle() {}//无参数构造方法；
	public Circle(double r) {//有参数构造方法；
		this();
		this.r = r;
	};
		
	public void CalculateCircleS() { //计算面积的方法
		this.s =  this.r * this.r * this.PI;
	}
	
	public void CirclePrint() { //打印圆信息的方法
		System.out.println("r = " + this.r +", s = " + this.s);
	}

}
