#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

void showMenu(); // ��ʾ�˵�

void addPerson(struct AddressBook* ab); // �����ϵ��

void showAllPeople(struct AddressBook* ab); // ��ʾȫ����ϵ��

int detectPerson(struct AddressBook* ab, string name); // ������ϵ��

void deletePerson(struct AddressBook* ab); // ɾ����ϵ��

void printPerson(struct AddressBook* ab); // ��ӡ������ϵ��

void modifyPerson(struct AddressBook* ab); // �޸���ϵ��

void deleteAll(struct AddressBook* ab); // ���ȫ����ϵ��
