#include<iostream>
#include<string>
#include<cstdlib>
#include "functions.h"
#include "structures.h"
using namespace std;

void printPerson(struct AddressBook* ab) {

	cout << "�������������ϵ�ˣ�" << endl;
	string name;
	cin >> name;
	int index = detectPerson(ab, name);

	if (index == -1) {
		cout << "���޴���" << endl;
	}
	else {
		struct Person temp = ab->people[index];
		cout << "������" << temp.name << "\t�Ա�" << "" << temp.sex << "\t���䣺" << temp.age
			<< "\t�绰��" << temp.phone << "\tסַ��" << temp.address << endl;
	}

	system("pause");

	system("cls");
}