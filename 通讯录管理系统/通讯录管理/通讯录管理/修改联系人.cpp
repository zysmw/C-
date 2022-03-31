#include<iostream>
#include<string>
#include<cstdlib>
#include "functions.h"
#include "structures.h"
using namespace std;

void modifyPerson(struct AddressBook* ab) {

	cout << "请输入待修改联系人：" << endl;
	string name;
	cin >> name;
	int index = detectPerson(ab, name);

	if (index == -1) {
		cout << "查无此人" << endl;
	}
	else {

		// 姓名
		cout << "请重新输入姓名：" << endl;
		string name1;
		cin >> name1;
		ab->people[index].name = name1;

		// 性别
		cout << "请重新输入性别：" << endl;
		cout << "1——男   0——女" << endl;
		int sex;
		while (true) {
			cin >> sex;
			if (sex == 0 || sex == 1) {
				ab->people[index].sex = (sex == 1 ? "男" : "女");
				break;
			}
			else {
				cout << "输入格式错误，请重新输入！" << endl;
			}
		}

		// 年龄
		cout << "请重新输入年龄：" << endl;
		int age;
		while (true) {
			cin >> age;
			if (age >= 0 && age <= 150) {
				ab->people[index].age = age;
				break;
			}
			else {
				cout << "输入格式错误，请重新输入！" << endl;
			}
		}

		// 电话
		cout << "请重新输入电话：" << endl;
		string phone;
		cin >> phone;
		ab->people[index].phone = phone;

		// 地址
		cout << "请重新输入地址：" << endl;
		string address;
		cin >> address;
		ab->people[index].address = address;

		cout << "修改完成！" << endl;
	}

	system("pause");

	system("cls");
}