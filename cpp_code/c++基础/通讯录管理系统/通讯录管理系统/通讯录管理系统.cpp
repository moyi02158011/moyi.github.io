#include <iostream>
#include <cstring>

using namespace std;
const int MAX = 1000;

//��ϵ��
struct Person {
	string m_Name;
	int m_Sex;
	int m_Age;
	string m_Phone;
	string m_Addr;
};

//ͨѶ¼
struct Addressbook {
	Person person[MAX];


};


//�˵�
void showMeru() {
	cout << "************************* " << endl;
	cout << "***** 1�������ϵ�� ***** " << endl;
	cout << "***** 2����ʾ��ϵ�� ***** " << endl;
	cout << "***** 3��ɾ����ϵ�� ***** " << endl;
	cout << "***** 4��������ϵ�� ***** " << endl;
	cout << "***** 5���޸���ϵ�� ***** " << endl;
	cout << "***** 6�������ϵ�� ***** " << endl;
	cout << "***** 0���˳�ͨѶ¼ ***** " << endl;
	cout << "************************* " << endl;
}

int main() {

	int select = 0;

	while (true) {

		showMeru();
		cin >> select;

		switch (select) {
		case 1: //1�������ϵ��
			break;
		case 2: //2����ʾ��ϵ��
			break;
		case 3: //3��ɾ����ϵ��
			break;
		case 4: //4��������ϵ��
			break;
		case 5: //5���޸���ϵ��
			break;
		case 6: //6�������ϵ��
			break;
		case 0: //0���˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			return 0;
			break;
		default:
			break;
		}
	}

	system("pause");
	return 0;
}