#pragma once
#include "Person.h"
class Student :
    public Person   //Inherits everything from person class
{
public:
    Student(string id, string newName, double newGpa = 0.0);
protected:

private:
    double gpa;
};

