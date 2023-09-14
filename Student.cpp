#include<iostream>
#include "Student.h"

Student::Student()
{
	std::cout << "Введите фамилию студента: ";
	std::cin >> name;
	std::cout << "Введите средний бал студента: ";
	std::cin >> grade;
}

Student::Student(std::string N, int G)
{
	name = N;
	grade = G;
}

std::string Student::getName()
{
	return name;
}

void Student::setName(std::string N)
{
	name = N;
}

int Student::getGrade()
{
	return grade;
}

std::ostream& const operator<<(std::ostream& os, Student& students)
{
	os << "Студент: " << students.getName()  << "\nСредний бал: " << students.getGrade() << std::endl;
	return os;
}

bool Student::operator<(const Student& students)const {
	if (name < students.name) {
		return false;
	}
	else if (name == students.name) {
		return false;
	}
	else return true;
}
