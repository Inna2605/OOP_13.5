#include<string>
#pragma once
class Student
{
	std::string name;
	int grade;
public:
	Student();
	Student(std::string N, int G);
	std::string getName();
	void setName(std::string N);
	int getGrade();
	bool operator<(const Student& students)const;
};
std::ostream& const operator<<(std::ostream& os, Student& students);
