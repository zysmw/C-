#include<iostream>
#include<string>
#include<cstdlib>
#include "functions.h"
#include "structures.h"
using namespace std;

void showAllPeople(struct AddressBook* ab) {
	if (ab->size == 0) {

		cout << "ͨѶ¼Ϊ�գ�" << endl;
	}
	else {

		for (int i = 0; i < ab->size; i++) {
			struct Person temp = ab->people[i];
			cout << "������" << temp.name << "\t�Ա�" << "" << temp.sex << "\t���䣺" << temp.age
				<< "\t�绰��" << temp.phone << "\tסַ��" << temp.address << endl;
		}
	}

	system("pause");

	system("cls");

}