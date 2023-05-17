package moyi0320;

public class Square extends Shape  {
	private double l;
	private double w;

	
	// ���췽��
	public Square() {
		
	}
	public Square(double l, double w,String color) {
		this.l = l;
		this.w = w;
		setC(2 * ( l + w ));
		setS(l * w );
		setColor(color);
	}
	
	
	//set����
	public void setL(double l) {
		if(l>0) {
			this.l =  l;
			setC( 2 * ( l + this.w ));
			setS( l * this.w );
		}
		else 
			System.out.println("�����쳣");
	}
	public void setW(double w) {
		if(w > 0) {
			this.w = w;
			setC( 2 * ( this.l + w ));
			setS( this.l * w );
		}
		else 
			System.out.println("�����쳣");
	}
	public void setLW(double l,double w) {
		if(l > 0 && w > 0) {
			this.l = l;
			this.w = w;
			setC( 2 * ( l + w ));
			setS(  l * w );
		}
		else
			System.out.println("�����쳣");
		
	}
	
	//get
	public double getL() {
		return l;
	}
	public double getW() {
		return w;
	}
	
	//print
	public void show() {
		System.out.print("������εĳ���"+this.l);
		System.out.print("��"+this.w);
		System.out.print("���ܳ���"+getC());
		System.out.print("�������"+getS());
		System.out.println("��������ɫ��"+getColor());
	}
	
}
