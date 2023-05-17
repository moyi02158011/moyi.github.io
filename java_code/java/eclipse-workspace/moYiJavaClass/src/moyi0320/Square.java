package moyi0320;

public class Square extends Shape  {
	private double l;
	private double w;

	
	// 构造方法
	public Square() {
		
	}
	public Square(double l, double w,String color) {
		this.l = l;
		this.w = w;
		setC(2 * ( l + w ));
		setS(l * w );
		setColor(color);
	}
	
	
	//set方法
	public void setL(double l) {
		if(l>0) {
			this.l =  l;
			setC( 2 * ( l + this.w ));
			setS( l * this.w );
		}
		else 
			System.out.println("数据异常");
	}
	public void setW(double w) {
		if(w > 0) {
			this.w = w;
			setC( 2 * ( this.l + w ));
			setS( this.l * w );
		}
		else 
			System.out.println("数据异常");
	}
	public void setLW(double l,double w) {
		if(l > 0 && w > 0) {
			this.l = l;
			this.w = w;
			setC( 2 * ( l + w ));
			setS(  l * w );
		}
		else
			System.out.println("数据异常");
		
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
		System.out.print("这个矩形的长："+this.l);
		System.out.print("宽："+this.w);
		System.out.print("，周长："+getC());
		System.out.print("，面积："+getS());
		System.out.println("，它的颜色："+getColor());
	}
	
}
