#include<iostream>
#include<string>
#include<cstdlib>
#include "functions.h"
#include "structures.h"
using namespace std;

int main() {

	// 创建通讯录结构体变量
	struct AddressBook ab;

	// 初始化
	ab.size = 0;

	while (true) {

		// 菜单调用
		showMenu();

		// 创建用户选择输入的变量
		int select;

		cin >> select;

		switch (select) {

		case 1: // 添加联系人
			addPerson(&ab); // 利用地址传递
			break;

		case 2: // 显示联系人
			showAllPeople(&ab);
			break;

		case 3:   // 删除联系人
			deletePerson(&ab);
			break;
		
		case 4:  // 查找联系人
			printPerson(&ab);
			break;
		
		case 5: // 修改联系人
			modifyPerson(&ab);
			break;

		case 6: // 清空联系人
			deleteAll(&ab);
			break;

		case 0: // 退出通讯录

			cout << "欢迎下次使用!" << endl;

			system("pause");

			return 0;

		default:

		{cout << "无效命令，请重新输入！" << endl;

		system("pause");

		system("cls");

		break; }

		}
	}

	system("pause");

	return 0;
}