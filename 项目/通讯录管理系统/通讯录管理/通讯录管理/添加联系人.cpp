#include<iostream>
#include<string>
#include<cstdlib>
#include "functions.h"
#include "structures.h"
using namespace std;

// 添加联系人函数
void addPerson(struct AddressBook* ab) {

	if (ab->size >= MAX) {

		cout << "通讯录已满，添加失败！" << endl;
		return;
	}
	else {
		// 添加具体联系人

		// 姓名
		string name;
		cout << "请输入姓名: " << endl;
		cin >> name;
		ab->people[ab->size].name = name;

		// 性别
		int sex;
		cout << "请输入性别" << endl;
		cout << "1—男性   0—女性" << endl;
		while (true) {

			cin >> sex;

			if (sex == 1 || sex == 0) {
				ab->people[ab->size].sex = (sex == 1 ? "男" : "女");
				break;
			}
			else {
				cout << "输入错误，请重新输入！" << endl;
			}
		}

		// 年龄
		int age;
		cout << "请输入年龄: " << endl;
		while (true) {
			cin >> age;
			if (age >= 0 && age <= 150) {
				ab->people[ab->size].age = age;
				break;
			}
			else {
				cout << "年龄输入有误，请重新输入！" << endl;
			}
		}


		// 电话
		string phone;
		cout << "请输入电话号码：" << endl;
		cin >> phone;
		ab->people[ab->size].phone = phone;

		// 地址
		string address;
		cout << "请输入地址：" << endl;
		cin >> address;
		ab->people[ab->size].address = address;

		// 更新通讯录中的人数
		ab->size += 1;

		cout << "添加成功！" << endl;

		system("pause"); // 请按任意键继续

		system("cls");  // 清屏操作
	}
}