package class2;


class Student {
	//�����Ա����
	String name;
	int id;
	double score;
	double sports;
	
	//���Ĺ��췽��
	Student ( int id ){
	      this.id = id;
	   }
	//����ѧ����Ϣ�ķ���
	//����name
	void setName ( String setName ) {
		this.name = setName;
	};
	//����id
	void setId ( int setId ) {
		this.id = setId;
	};
	//����score
	void setScore ( double setScore ) {
		this.score = setScore;
	};
	//����sports
	void setSports (double setSports) {
		this.sports = setSports;
	};
	
	//��ȡѧ����Ϣ�ķ���
	void  printStudent (){
	    System.out.println( "����:" + name );
	    System.out.println( "ѧ��:" + id );
	    System.out.println( "�ۺϳɼ�:" + score );
	    System.out.println( "�����ɼ�:" + sports );
	}
	
}


public class Class2 {
	public static void main( String[] args ) {
		//��������
		Student studentOne = new Student( 1 );
		Student studentTwo = new Student( 2 );
		
		//��������������ĳ�Ա����
		//��������
		studentOne.setName( "С��" );
		studentOne.setScore( 550.5 );
		studentOne.setSports( 90.5 );
		studentTwo.setName( "С��" );
		studentTwo.setScore( 540 );
		studentTwo.setSports( 88.5 );
		//���ö���
		studentOne.printStudent();
		System.out.println();
		studentTwo.printStudent();
	}

}
