#include "Student.h"

Student::Student(string id, string newName, double newGpa) : 
	Person(id, newName)
{
	gpa = newGpa;
}
