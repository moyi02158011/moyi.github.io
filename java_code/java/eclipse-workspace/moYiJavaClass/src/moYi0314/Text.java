package moYi0314;

public class Text {
	static double d;
	static int k;
	static int i = 1;
	public static void main(String[] args) {
		
		Cylinder a = new Cylinder();
		Cylinder b = new Cylinder(30,10);
		
		
		a.r = 11;
		a.h = 12;
		a.CalculateCylinderV();//计算a的体积
		b.CalculateCylinderV();//计算b的体积
		
		
		System.out.print("第一个圆柱的属性：");
		a.CylinderPrint();
		System.out.print("第二个圆柱的属性：");
		b.CylinderPrint();
		
		d = a.r;
		System.out.println(a.r);		
		System.out.print(d);
		d = 1000;
		System.out.print(""+i);
	}
	
}
