#include<iostream>
#include<string>
#include<cstdlib>
#include "functions.h"
#include "structures.h"
using namespace std;

void deleteAll(struct AddressBook* ab) {

	cout << "ȷ��Ҫ���������ϵ����[y/n]" << endl;
	string flag;
	cin >> flag;

	if (flag == "y") {
		ab->size = 0;
		cout << "ͨѶ¼����գ�" << endl;
	}

	system("pause");

	system("cls");
}