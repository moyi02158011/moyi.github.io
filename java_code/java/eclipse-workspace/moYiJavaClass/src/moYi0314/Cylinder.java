package moYi0314;

import circle.Circle;//引别的包的类



public class Cylinder extends Circle{
	double v;
	Circle circle = new Circle(); //直接构造圆 
	
	protected double h;//protected类型的h
	
	public Cylinder() {}//无参数构造方法；
	public Cylinder(double r , double h) {//有参构造方法
		this();
		this.r = r;//super 对父类的r进行修改
		this.h = h;
	};
	
	public void CalculateCylinderV() {//计算体积的方法
		super.CalculateCircleS();
		this.v = this.h * super.s;
	}
	public void CylinderPrint() {//打印圆柱信息的方法
		System.out.println("r = " + super.r +", s = " + this.s + ", v = " + this.v);
	}
}
