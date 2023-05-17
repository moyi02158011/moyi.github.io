package class2;


class Student {
	//构造成员变量
	String name;
	int id;
	double score;
	double sports;
	
	//它的构造方法
	Student ( int id ){
	      this.id = id;
	   }
	//设置学生信息的方法
	//设置name
	void setName ( String setName ) {
		this.name = setName;
	};
	//设置id
	void setId ( int setId ) {
		this.id = setId;
	};
	//设置score
	void setScore ( double setScore ) {
		this.score = setScore;
	};
	//设置sports
	void setSports (double setSports) {
		this.sports = setSports;
	};
	
	//获取学生信息的方法
	void  printStudent (){
	    System.out.println( "名字:" + name );
	    System.out.println( "学号:" + id );
	    System.out.println( "综合成绩:" + score );
	    System.out.println( "体育成绩:" + sports );
	}
	
}


public class Class2 {
	public static void main( String[] args ) {
		//创建对象
		Student studentOne = new Student( 1 );
		Student studentTwo = new Student( 2 );
		
		//调用这两个对象的成员方法
		//创建对象
		studentOne.setName( "小明" );
		studentOne.setScore( 550.5 );
		studentOne.setSports( 90.5 );
		studentTwo.setName( "小红" );
		studentTwo.setScore( 540 );
		studentTwo.setSports( 88.5 );
		//调用对象
		studentOne.printStudent();
		System.out.println();
		studentTwo.printStudent();
	}

}
