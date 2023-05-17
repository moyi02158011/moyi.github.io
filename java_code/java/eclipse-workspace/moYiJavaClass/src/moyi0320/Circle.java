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
			System.out.println("�����쳣");
	}
	
	
	//get
	public double getR() {
		return r;
	}

	//��ӡ
	public void show() {
		System.out.print("���Բ�İ뾶��"+this.r);
		System.out.print("���ܳ���"+getC());
		System.out.print("�������"+getS());
		System.out.println("��������ɫ��"+getColor());
	}
	
}
