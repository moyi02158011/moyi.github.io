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
	int m_Size;
};




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


void addPerson(Addressbook* abs) {
	system("cls"); // 清屏 
	cout << "添加联系人 ： " << endl;


	if (abs->m_Size == MAX) {
		cout << "通讯录已满无法添加" << endl;
		return;
	}

	++abs->m_Size;

	cout << "请输入姓名" << endl;
	string name;
	cin >> name;
	abs->person[abs->m_Size].m_Name = name;

	cout << "请输入性别（1 . 男   2. 女）" << endl;
	int a = 0;
	while (cin >> a, a != 1 && a != 2) cout << "输入错误，请重新输入" << endl;
	abs->person[abs->m_Size].m_Sex = a;

	cout << "请输入年龄" << endl;
	int b;
	while (cin >> b, b < 0 || b > 150) cout << "输入错误，请重新输入" << endl;
	abs->person[abs->m_Size].m_Age = b;

	cout << "请输入11位手机号码" << endl;
	string c;
	while (cin >> c, c.size() <= 10 || c.size() >= 12) cout << "输入错误，请重新输入" << endl;
	abs->person[abs->m_Size].m_Phone = c;

	cout << "请输入家庭地址" << endl;
	string d;
	cin >> d;
	abs->person[abs->m_Size].m_Addr = d;

	cout << "添加成功！！！" << endl;

	system("pause"); // 按任意键继续
	system("cls"); // 清屏 
}

void showPerson(Addressbook abs) {
	system("cls"); // 清屏 
	if (!abs.m_Size) {
		cout << "通讯录为空,请先添加联系人" << endl;
		system("pause"); // 按任意键继续
		system("cls"); // 清屏 
		return;
	}

	cout << "联系人列表：： " << endl;

	cout << "姓名" << "\t";
	cout << "性别" << "\t";
	cout << "年龄" << "\t";
	cout << "手   机  号" << "\t";
	cout << "家庭住址" << endl;

	for (int i = 1; i <= abs.m_Size; i++) {
		cout << abs.person[i].m_Name << "\t";
		if (abs.person[i].m_Sex == 1) cout << "男" << "\t";
		else cout << "女" << "\t";
		cout << abs.person[i].m_Age << "\t";
		cout << abs.person[i].m_Phone << "\t";
		cout << abs.person[i].m_Addr << endl;
	}
	system("pause"); // 按任意键继续
	system("cls"); // 清屏 
}

int checkPerson(string name, Addressbook abs) {
	if (!abs.m_Size) return -1;
	for (int i = 1; i <= abs.m_Size; i++) {
		if (abs.person[i].m_Name == name) return i;
	}
	return -1;
}

void deletelPerson(Addressbook* abs)
{
	system("cls"); // 清屏 
	cout << "请输入删除的联系人姓名 ：： " << endl;

	string name;
	cin >> name;

	int k = checkPerson(name, *abs);
	if (k == -1) {
		cout << "联系人不存在" << endl;
	}
	else {
		for (int i = k; i <= abs->m_Size; i++) {
			abs->person[i] = abs->person[i + 1];
		}
		abs->m_Size--;
		cout << "删除成功" << endl;
	}
	system("pause"); // 按任意键继续
	system("cls"); // 清屏 
}

void findPerson(Addressbook abs) {
	system("cls"); // 清屏 
	cout << "请输入查找的联系人姓名 ：： " << endl;

	string name;
	cin >> name;

	int k = checkPerson(name, abs);
	if (k == -1) {
		cout << "联系人不存在" << endl;
	}
	else {
		cout << abs.person[k].m_Name << "\t";
		if (abs.person[k].m_Sex == 1) cout << "男" << "\t";
		else cout << "女" << "\t";
		cout << abs.person[k].m_Age << "\t";
		cout << abs.person[k].m_Phone << "\t";
		cout << abs.person[k].m_Addr << endl;
	}
	system("pause"); // 按任意键继续
	system("cls"); // 清屏 
}

void revisePerson(Addressbook* abs) {
	system("cls"); // 清屏 
	cout << "请输入修改的联系人姓名 ：： " << endl;
	string name;
	cin >> name;


	int k = checkPerson(name, *abs);
	
	if (k == -1) {
		cout << "联系人不存在" << endl;
	}
	else {
		cout << "请输入修改后的名字 " << endl;
		string name;
		cin >> name;
		abs->person[k].m_Name = name;

		cout << "请输入修改后的性别（1 . 男   2. 女）" << endl;
		int a = 0;
		while (cin >> a, a != 1 && a != 2) cout << "输入错误，请重新输入" << endl;
		abs->person[k].m_Sex = a;

		cout << "请输入修改后的年龄" << endl;
		int b;
		while (cin >> b, b < 0 || b > 150) cout << "输入错误，请重新输入" << endl;
		abs->person[k].m_Age = b;

		cout << "请输入修改后11位手机号码" << endl;
		string c;
		while (cin >> c, c.size() <= 10 || c.size() >= 12) cout << "输入错误，请重新输入" << endl;
		abs->person[k].m_Phone = c;

		cout << "请输入修改后的家庭地址" << endl;
		string d;
		cin >> d;
		abs->person[k].m_Addr = d;
	}

	system("pause"); // 按任意键继续
	system("cls"); // 清屏 
}


int main() {
	Addressbook abs;
	abs.m_Size = 0;
	showMeru();
	int k = 0;
	while (cin >> k, k) {

		switch (k)
		{
		case 1:
			addPerson(&abs);
			break;
		case 2:
			showPerson(abs);
			break;
		case 3:
			deletelPerson(&abs);
			break;
		case 4:
			findPerson(abs);
			break;
		case 5:
			revisePerson(&abs);
			break;
		case 6:
			system("cls"); // 清屏 
			abs.m_Size = 0;
			cout << "操作成功" << endl;
			system("pause"); // 按任意键继续
			break;
		default:
			break;
		}
		showMeru();
	}

	system("cls"); // 清屏 
	cout << "欢迎下次使用" << endl;
	system("pause");
	return 0;
}