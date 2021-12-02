#pragma once
#include "Student.h"
#include "Instructor.h"
#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
using std::vector;
using std::string;
using std::cout;
using std::endl;

class Course
{
public:
	Course(string newName);
	void setInstructor(Instructor newInstructor);
	void addStudent(Student newStudent, double grade = 0.0);
	int printClassList();	//uses iostream, iomanip
protected:

private:
	string courseName;
	Instructor courseInstructor;
	vector<Student> studentList;
	vector<double> gradeList;
};

