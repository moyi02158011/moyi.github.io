package circle;

public class Circle {

	public double r;
	public double s;
	public double PI = 3.14;
	
	//���췽��
	public Circle() {}//�޲������췽����
	public Circle(double r) {//�в������췽����
		this();
		this.r = r;
	};
		
	public void CalculateCircleS() { //��������ķ���
		this.s =  this.r * this.r * this.PI;
	}
	
	public void CirclePrint() { //��ӡԲ��Ϣ�ķ���
		System.out.println("r = " + this.r +", s = " + this.s);
	}

}
