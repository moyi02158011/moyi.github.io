#include <iostream>
#include <cstring>

using namespace std;
const int MAX = 1000;

//联系人
struct Person {
	string m_Name;
	int m_Sex;
	int m_Age;
	string m_Phone;
	string m_Addr;
};

//通讯录
struct Addressbook {
	Person person[MAX];


};


//菜单
void showMeru() {
	cout << "************************* " << endl;
	cout << "***** 1、添加联系人 ***** " << endl;
	cout << "***** 2、显示联系人 ***** " << endl;
	cout << "***** 3、删除联系人 ***** " << endl;
	cout << "***** 4、查找联系人 ***** " << endl;
	cout << "***** 5、修改联系人 ***** " << endl;
	cout << "***** 6、清空联系人 ***** " << endl;
	cout << "***** 0、退出通讯录 ***** " << endl;
	cout << "************************* " << endl;
}

int main() {

	int select = 0;

	while (true) {

		showMeru();
		cin >> select;

		switch (select) {
		case 1: //1、添加联系人
			break;
		case 2: //2、显示联系人
			break;
		case 3: //3、删除联系人
			break;
		case 4: //4、查找联系人
			break;
		case 5: //5、修改联系人
			break;
		case 6: //6、清空联系人
			break;
		case 0: //0、退出通讯录
			cout << "欢迎下次使用" << endl;
			return 0;
			break;
		default:
			break;
		}
	}

	system("pause");
	return 0;
}