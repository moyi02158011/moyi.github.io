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
		a.CalculateCylinderV();//����a�����
		b.CalculateCylinderV();//����b�����
		
		
		System.out.print("��һ��Բ�������ԣ�");
		a.CylinderPrint();
		System.out.print("�ڶ���Բ�������ԣ�");
		b.CylinderPrint();
		
		d = a.r;
		System.out.println(a.r);		
		System.out.print(d);
		d = 1000;
		System.out.print(""+i);
	}
	
}
