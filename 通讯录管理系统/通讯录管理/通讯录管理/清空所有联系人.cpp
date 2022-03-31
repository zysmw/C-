#include<iostream>
#include<string>
#include<cstdlib>
#include "functions.h"
#include "structures.h"
using namespace std;

void deleteAll(struct AddressBook* ab) {

	cout << "确定要清除所有联系人吗？[y/n]" << endl;
	string flag;
	cin >> flag;

	if (flag == "y") {
		ab->size = 0;
		cout << "通讯录已清空！" << endl;
	}

	system("pause");

	system("cls");
}