#include<iostream>
#include<string>
#include<cstdlib>
#include "functions.h"
#include "structures.h"
using namespace std;

int main() {

	// ����ͨѶ¼�ṹ�����
	struct AddressBook ab;

	// ��ʼ��
	ab.size = 0;

	while (true) {

		// �˵�����
		showMenu();

		// �����û�ѡ������ı���
		int select;

		cin >> select;

		switch (select) {

		case 1: // �����ϵ��
			addPerson(&ab); // ���õ�ַ����
			break;

		case 2: // ��ʾ��ϵ��
			showAllPeople(&ab);
			break;

		case 3:   // ɾ����ϵ��
			deletePerson(&ab);
			break;
		
		case 4:  // ������ϵ��
			printPerson(&ab);
			break;
		
		case 5: // �޸���ϵ��
			modifyPerson(&ab);
			break;

		case 6: // �����ϵ��
			deleteAll(&ab);
			break;

		case 0: // �˳�ͨѶ¼

			cout << "��ӭ�´�ʹ��!" << endl;

			system("pause");

			return 0;

		default:

		{cout << "��Ч������������룡" << endl;

		system("pause");

		system("cls");

		break; }

		}
	}

	system("pause");

	return 0;
}