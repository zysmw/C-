#include<iostream>
#include<string>
#include<cstdlib>
#include "functions.h"
#include "structures.h"
using namespace std;

int detectPerson(struct AddressBook* ab, string name) {

	for (int i = 0; i < ab->size; i++) {
		if (ab->people[i].name == name) {
			return i;
		}
	}
	return -1;
}