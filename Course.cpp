#include "Course.h"

Course::Course(string newName) {
	courseName = newName;
}

void Course::setInstructor(Instructor newInstructor) {

}

void Course::addStudent(Student newStudent, double grade) {
	studentList.push_back(newStudent);
	gradeList.push_back(grade);
}

int Course::printClassList() {
	cout << std::setprecision(2) << std::fixed;
	cout << "Course Name: " << courseName << endl;
	cout << "Instructor Name: " << courseInstructor.getName() << endl;
	cout << std::setw(15) << std::left << "Student Name";
	cout << std::setw(8) << std::right << "GPA" << endl;
	for (int i = 0; i < studentList.size(); i++) {
		cout << std::setw(15) << std::left << studentList[i].getName();
		cout << std::setw(8) << std::right << gradeList[i] << endl;
	}
	return 0;
}
