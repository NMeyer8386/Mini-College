#include "Person.h"

Person::Person(string id, string newName) {
	sNumber = id;
	name = newName;
}

string Person::getName()
{
	return name;
}
