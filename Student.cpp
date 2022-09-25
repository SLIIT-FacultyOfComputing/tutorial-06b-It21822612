#include "Student.h"
#include <iostream>

// Assign studentId and name
Student::assignDetails(int sid, char sname[20]) {
	studentID = sid;
	name[20] = sname[20];
}

// Display StudentId and Name
Student::display() {
	std::cout << "student ID: " << studentID << std::endl;
	std::cout << "name: " << name[20] << std::endl;

}
