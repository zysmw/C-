#include<iostream>
#include<string>
#include<cstdlib>
#include "functions.h"
#include "structures.h"
using namespace std;

void deletePerson(struct AddressBook* ab) {

	cout << "�������ɾ������ϵ�ˣ�" << endl;
	string name;
	cin >> name;
	int index = detectPerson(ab, name);

	if (index == -1) {
		cout << "���޴��ˣ�" << endl;
	}
	else {
		for (int i = index; i < ab->size; i++) {
			ab->people[i] = ab->people[i + 1];
		}
		ab->size -= 1;
		cout << "ɾ���ɹ���" << endl;
	}
	system("pause");

	system("cls");
}
