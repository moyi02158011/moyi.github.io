package moyi0320;

public class Shape {
	private double c;
	private double s;
	private String color;
	
	public Shape() {
	}
	public Shape(double c,double s, String color) {
		this.c = c;
		this.s = s;
		this.color = color;
	}
	public void setC(double c) {
		this.c = c;
	}
	public void setS(double s) {
		this.s = s;
	}
	public void setColor(String color) {
		this.color = color;
	}
	
	
	public double getC() {
		return c;
	}
	public String getColor() {
		return color;
	}
	public double getS() {
		return s;
	}
	
	public void show() {
		System.out.print("���ͼ�ε��ܳ���"+this.c);
		System.out.print("�������"+this.s);
		System.out.println("��������ɫ��"+this.color);
	}
	
	
}
