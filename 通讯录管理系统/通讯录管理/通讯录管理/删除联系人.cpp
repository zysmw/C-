#include<iostream>
#include<string>
#include<cstdlib>
#include "functions.h"
#include "structures.h"
using namespace std;

void deletePerson(struct AddressBook* ab) {

	cout << "请输入待删除的联系人：" << endl;
	string name;
	cin >> name;
	int index = detectPerson(ab, name);

	if (index == -1) {
		cout << "查无此人！" << endl;
	}
	else {
		for (int i = index; i < ab->size; i++) {
			ab->people[i] = ab->people[i + 1];
		}
		ab->size -= 1;
		cout << "删除成功！" << endl;
	}
	system("pause");

	system("cls");
}
