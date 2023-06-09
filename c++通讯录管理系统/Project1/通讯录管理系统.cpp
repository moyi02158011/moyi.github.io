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
	int m_Size;
};




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


void addPerson(Addressbook* abs) {
	system("cls"); // ���� 
	cout << "�����ϵ�� �� " << endl;


	if (abs->m_Size == MAX) {
		cout << "ͨѶ¼�����޷����" << endl;
		return;
	}

	++abs->m_Size;

	cout << "����������" << endl;
	string name;
	cin >> name;
	abs->person[abs->m_Size].m_Name = name;

	cout << "�������Ա�1 . ��   2. Ů��" << endl;
	int a = 0;
	while (cin >> a, a != 1 && a != 2) cout << "�����������������" << endl;
	abs->person[abs->m_Size].m_Sex = a;

	cout << "����������" << endl;
	int b;
	while (cin >> b, b < 0 || b > 150) cout << "�����������������" << endl;
	abs->person[abs->m_Size].m_Age = b;

	cout << "������11λ�ֻ�����" << endl;
	string c;
	while (cin >> c, c.size() <= 10 || c.size() >= 12) cout << "�����������������" << endl;
	abs->person[abs->m_Size].m_Phone = c;

	cout << "�������ͥ��ַ" << endl;
	string d;
	cin >> d;
	abs->person[abs->m_Size].m_Addr = d;

	cout << "��ӳɹ�������" << endl;

	system("pause"); // �����������
	system("cls"); // ���� 
}

void showPerson(Addressbook abs) {
	system("cls"); // ���� 
	if (!abs.m_Size) {
		cout << "ͨѶ¼Ϊ��,���������ϵ��" << endl;
		system("pause"); // �����������
		system("cls"); // ���� 
		return;
	}

	cout << "��ϵ���б��� " << endl;

	cout << "����" << "\t";
	cout << "�Ա�" << "\t";
	cout << "����" << "\t";
	cout << "��   ��  ��" << "\t";
	cout << "��ͥסַ" << endl;

	for (int i = 1; i <= abs.m_Size; i++) {
		cout << abs.person[i].m_Name << "\t";
		if (abs.person[i].m_Sex == 1) cout << "��" << "\t";
		else cout << "Ů" << "\t";
		cout << abs.person[i].m_Age << "\t";
		cout << abs.person[i].m_Phone << "\t";
		cout << abs.person[i].m_Addr << endl;
	}
	system("pause"); // �����������
	system("cls"); // ���� 
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
	system("cls"); // ���� 
	cout << "������ɾ������ϵ������ ���� " << endl;

	string name;
	cin >> name;

	int k = checkPerson(name, *abs);
	if (k == -1) {
		cout << "��ϵ�˲�����" << endl;
	}
	else {
		for (int i = k; i <= abs->m_Size; i++) {
			abs->person[i] = abs->person[i + 1];
		}
		abs->m_Size--;
		cout << "ɾ���ɹ�" << endl;
	}
	system("pause"); // �����������
	system("cls"); // ���� 
}

void findPerson(Addressbook abs) {
	system("cls"); // ���� 
	cout << "��������ҵ���ϵ������ ���� " << endl;

	string name;
	cin >> name;

	int k = checkPerson(name, abs);
	if (k == -1) {
		cout << "��ϵ�˲�����" << endl;
	}
	else {
		cout << abs.person[k].m_Name << "\t";
		if (abs.person[k].m_Sex == 1) cout << "��" << "\t";
		else cout << "Ů" << "\t";
		cout << abs.person[k].m_Age << "\t";
		cout << abs.person[k].m_Phone << "\t";
		cout << abs.person[k].m_Addr << endl;
	}
	system("pause"); // �����������
	system("cls"); // ���� 
}

void revisePerson(Addressbook* abs) {
	system("cls"); // ���� 
	cout << "�������޸ĵ���ϵ������ ���� " << endl;
	string name;
	cin >> name;


	int k = checkPerson(name, *abs);
	
	if (k == -1) {
		cout << "��ϵ�˲�����" << endl;
	}
	else {
		cout << "�������޸ĺ������ " << endl;
		string name;
		cin >> name;
		abs->person[k].m_Name = name;

		cout << "�������޸ĺ���Ա�1 . ��   2. Ů��" << endl;
		int a = 0;
		while (cin >> a, a != 1 && a != 2) cout << "�����������������" << endl;
		abs->person[k].m_Sex = a;

		cout << "�������޸ĺ������" << endl;
		int b;
		while (cin >> b, b < 0 || b > 150) cout << "�����������������" << endl;
		abs->person[k].m_Age = b;

		cout << "�������޸ĺ�11λ�ֻ�����" << endl;
		string c;
		while (cin >> c, c.size() <= 10 || c.size() >= 12) cout << "�����������������" << endl;
		abs->person[k].m_Phone = c;

		cout << "�������޸ĺ�ļ�ͥ��ַ" << endl;
		string d;
		cin >> d;
		abs->person[k].m_Addr = d;
	}

	system("pause"); // �����������
	system("cls"); // ���� 
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
			system("cls"); // ���� 
			abs.m_Size = 0;
			cout << "�����ɹ�" << endl;
			system("pause"); // �����������
			break;
		default:
			break;
		}
		showMeru();
	}

	system("cls"); // ���� 
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	return 0;
}