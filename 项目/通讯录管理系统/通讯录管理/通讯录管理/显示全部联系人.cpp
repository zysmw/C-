#include<iostream>
#include<string>
#include<cstdlib>
#include "functions.h"
#include "structures.h"
using namespace std;

void showAllPeople(struct AddressBook* ab) {
	if (ab->size == 0) {

		cout << "通讯录为空！" << endl;
	}
	else {

		for (int i = 0; i < ab->size; i++) {
			struct Person temp = ab->people[i];
			cout << "姓名：" << temp.name << "\t性别：" << "" << temp.sex << "\t年龄：" << temp.age
				<< "\t电话：" << temp.phone << "\t住址：" << temp.address << endl;
		}
	}

	system("pause");

	system("cls");

}