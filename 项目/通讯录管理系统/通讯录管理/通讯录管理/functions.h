#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

void showMenu(); // 显示菜单

void addPerson(struct AddressBook* ab); // 添加联系人

void showAllPeople(struct AddressBook* ab); // 显示全部联系人

int detectPerson(struct AddressBook* ab, string name); // 查找联系人

void deletePerson(struct AddressBook* ab); // 删除联系人

void printPerson(struct AddressBook* ab); // 打印单个联系人

void modifyPerson(struct AddressBook* ab); // 修改联系人

void deleteAll(struct AddressBook* ab); // 清空全部联系人
