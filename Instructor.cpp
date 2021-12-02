#include "Instructor.h"

Instructor::Instructor(string id, string newName, string newOffice) :
	Person(id, newName)
{
	office = newOffice;
}
