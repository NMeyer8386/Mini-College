#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"
using namespace std;	//bad idea, but convenient

int main() {
	Course progI("CIT-1154-C01");
	Instructor stephen("s0075425", "Stephen Graham", "IB1137");
	Student alice("s0000001", "Alice", 4.0);
	Student bob("s0000002", "Bob");
	Student charlie("s0000003", "Charlie");

	progI.setInstructor(stephen);
	progI.addStudent(alice);
	progI.addStudent(bob, 93.5);
	progI.addStudent(charlie);

	progI.printClassList();

	return 0;
}