package moYi0314;

import circle.Circle;//����İ�����



public class Cylinder extends Circle{
	double v;
	Circle circle = new Circle(); //ֱ�ӹ���Բ 
	
	protected double h;//protected���͵�h
	
	public Cylinder() {}//�޲������췽����
	public Cylinder(double r , double h) {//�вι��췽��
		this();
		this.r = r;//super �Ը����r�����޸�
		this.h = h;
	};
	
	public void CalculateCylinderV() {//��������ķ���
		super.CalculateCircleS();
		this.v = this.h * super.s;
	}
	public void CylinderPrint() {//��ӡԲ����Ϣ�ķ���
		System.out.println("r = " + super.r +", s = " + this.s + ", v = " + this.v);
	}
}
