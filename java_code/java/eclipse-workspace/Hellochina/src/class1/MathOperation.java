package class1;
import java.util.Scanner;

public class MathOperation {

	public static void main(String[] args) {
		int a=0,b=0,c=0,x=0;
		int score=0;
		
		
		Scanner scanner=new Scanner(System.in);
		
		for (int i=0;i<10;i++){
		
			a = (int)(Math.random() * 100);
			b = (int)(Math.random() * 100);
			x = ((int)(Math.random() * 100))/25;
			System.out.println("a="+a);
			System.out.println("b="+b);
			switch(x){
				case 0:
				System.out.println("a+b=");
		        c=scanner.nextInt();
				if(c==a+b) {
					System.out.println("��ϲ������");
					score+=10;
					
				}
				else {
					System.out.println("��ϧ�ˣ��𰸴���");
				};
				break;
				case 1:
					System.out.println("a-b=");
					c=scanner.nextInt();
				
					if(c==a-b) {
						System.out.println("��ϲ������");
						score+=10;
					
					}
					else {
						System.out.println("��ϧ�ˣ��𰸴���");
				};
				break;
				case 2:System.out.println("a*b=");
		        c=scanner.nextInt();
				
				if(c==a*b) {
					System.out.println("��ϲ������");
					score+=10;
					
				}
				else {
					System.out.println("��ϧ�ˣ��𰸴���");
				};
				break;
				case 3:System.out.println("a/b=");
		        c=scanner.nextInt();
				
				if(c==a/b) {
					System.out.println("��ϲ������");
					score+=10;
					
				}
				else {
					System.out.println("��ϧ�ˣ��𰸴���");
				};
				break;
			}	
		}
		System.out.println("�����յĵ÷�Ϊ"+score);
	}
}
