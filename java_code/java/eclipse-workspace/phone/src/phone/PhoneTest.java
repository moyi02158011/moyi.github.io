package phone;

public class PhoneTest {

	public static void main(String[] args) {
		
		Phone p1 = new Phone();
		
		p1.name ="huawei";
		p1.price = 6999;
		
		System.out.println("name = " + p1.name +", price =" + p1.price);
	
		p1.call();
		p1.sendMessage("���ڹ���ֹ����");
		p1.playGame();
	
	
	}

}
