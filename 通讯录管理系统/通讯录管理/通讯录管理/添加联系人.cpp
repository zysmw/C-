#include<iostream>
#include<string>
#include<cstdlib>
#include "functions.h"
#include "structures.h"
using namespace std;

// �����ϵ�˺���
void addPerson(struct AddressBook* ab) {

	if (ab->size >= MAX) {

		cout << "ͨѶ¼���������ʧ�ܣ�" << endl;
		return;
	}
	else {
		// ��Ӿ�����ϵ��

		// ����
		string name;
		cout << "����������: " << endl;
		cin >> name;
		ab->people[ab->size].name = name;

		// �Ա�
		int sex;
		cout << "�������Ա�" << endl;
		cout << "1������   0��Ů��" << endl;
		while (true) {

			cin >> sex;

			if (sex == 1 || sex == 0) {
				ab->people[ab->size].sex = (sex == 1 ? "��" : "Ů");
				break;
			}
			else {
				cout << "����������������룡" << endl;
			}
		}

		// ����
		int age;
		cout << "����������: " << endl;
		while (true) {
			cin >> age;
			if (age >= 0 && age <= 150) {
				ab->people[ab->size].age = age;
				break;
			}
			else {
				cout << "���������������������룡" << endl;
			}
		}


		// �绰
		string phone;
		cout << "������绰���룺" << endl;
		cin >> phone;
		ab->people[ab->size].phone = phone;

		// ��ַ
		string address;
		cout << "�������ַ��" << endl;
		cin >> address;
		ab->people[ab->size].address = address;

		// ����ͨѶ¼�е�����
		ab->size += 1;

		cout << "��ӳɹ���" << endl;

		system("pause"); // �밴���������

		system("cls");  // ��������
	}
}