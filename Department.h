// // UniversityCpp - Department.h
#pragma once
#include "Teacher.h"

using namespace std;

class Department : public IUniversity{
private:
    string name;
    vector<Teacher> teachers;

public:
    Department(string name) : name(name) {}

    string getName() { return name; }
    void setName(string& name) { this->name = name; }

    vector<Teacher> getTeachers() { return teachers; }
    void addTeacher(Teacher teacher) { teachers.push_back(teacher); }

    void PrintInformation() override
    {
        cout << "\t\t\t\t------ Department: " << name << " ------" << endl;
        cout << left << setw(20) << "Name" << setw(15) << "Gender" << setw(15) << "Birth Year" << setw(30) << "Has Children" << setw(20) << "Salary" << setw(15) << "Category" << endl;
        for (Teacher teacher : teachers) {
            teacher.PrintInformation();
        }
        cout << "=================================================================================================================" << endl;
    }
};
