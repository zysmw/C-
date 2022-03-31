#include<iostream>
#include<string>
#include<cstdlib>
#include "functions.h"
#include "structures.h"
using namespace std;

void modifyPerson(struct AddressBook* ab) {

	cout << "��������޸���ϵ�ˣ�" << endl;
	string name;
	cin >> name;
	int index = detectPerson(ab, name);

	if (index == -1) {
		cout << "���޴���" << endl;
	}
	else {

		// ����
		cout << "����������������" << endl;
		string name1;
		cin >> name1;
		ab->people[index].name = name1;

		// �Ա�
		cout << "�����������Ա�" << endl;
		cout << "1������   0����Ů" << endl;
		int sex;
		while (true) {
			cin >> sex;
			if (sex == 0 || sex == 1) {
				ab->people[index].sex = (sex == 1 ? "��" : "Ů");
				break;
			}
			else {
				cout << "�����ʽ�������������룡" << endl;
			}
		}

		// ����
		cout << "�������������䣺" << endl;
		int age;
		while (true) {
			cin >> age;
			if (age >= 0 && age <= 150) {
				ab->people[index].age = age;
				break;
			}
			else {
				cout << "�����ʽ�������������룡" << endl;
			}
		}

		// �绰
		cout << "����������绰��" << endl;
		string phone;
		cin >> phone;
		ab->people[index].phone = phone;

		// ��ַ
		cout << "�����������ַ��" << endl;
		string address;
		cin >> address;
		ab->people[index].address = address;

		cout << "�޸���ɣ�" << endl;
	}

	system("pause");

	system("cls");
}