#include<iostream>
#include<string>
#include<cstdlib>
#include "functions.h"
#include "structures.h"
using namespace std;

void printPerson(struct AddressBook* ab) {

	cout << "请输入待查找联系人：" << endl;
	string name;
	cin >> name;
	int index = detectPerson(ab, name);

	if (index == -1) {
		cout << "查无此人" << endl;
	}
	else {
		struct Person temp = ab->people[index];
		cout << "姓名：" << temp.name << "\t性别：" << "" << temp.sex << "\t年龄：" << temp.age
			<< "\t电话：" << temp.phone << "\t住址：" << temp.address << endl;
	}

	system("pause");

	system("cls");
}