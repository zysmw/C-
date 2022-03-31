#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

struct Person {

	string name;

	string sex;  

	int age;

	string phone;

	string address;
};


#define MAX 1000

struct AddressBook {

	struct Person people[MAX];

	int size;

};
