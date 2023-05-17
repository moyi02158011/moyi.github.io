package Variable;

public class Text {
	
	public static void main(String[] args) {
		
		int x = 10;
		while( x < 20 ) {
	         System.out.print("value of x : " + x +"\n");
	         x++;
	      }
		
	    int b = 30;
	    System.out.print(b + "\n");
	    
	    b = 100;
	    //System.out.println(a); //在这里访问 a 是错误的
	    
	    //可以再定义一个变量 a，没有重名问题，因为局部代码块中的 a 已经被释放
	    int a = 20;
	    System.out.println(a);
	}
}


