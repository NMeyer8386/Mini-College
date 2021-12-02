#pragma once
#include <string>
using std::string;
class Person {
public:
	Person(string id = "s0000000", string newName = "no name");
	string getName();
protected:
	string sNumber;
	string name;
private:

};