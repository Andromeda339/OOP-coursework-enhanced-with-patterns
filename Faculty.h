// // UniversityCpp - Faculty.h
#pragma once
#include "Student.h"
#include "Teacher.h"

using namespace std;

class Faculty : IUniversity{
private:
    string name;
    vector<Student> students;
    vector<Teacher> teachers;

public:
    Faculty(string name) : name(name) {}

    string getName()  { return name; }
    void setName(string name) { this->name = name; }

    vector<Student> getStudents()  { return students; }
    void addStudent(Student student) { students.push_back(student); }

    vector<Teacher> getTeachers()  { return teachers; }
    void addTeacher(Teacher& teacher) { teachers.push_back(teacher); }

    void PrintInformation() override
    {
        cout << "\t\t\t\tFaculty Name: " << name << endl;
        cout << "-----------------------------------------------------------------------------------------------------------------" << endl;

        cout << "\t\t\t\t\tTeachers\n" << endl;
        cout << left << setw(20) << "Name" << setw(20) << "Gender" << setw(20) << "Birth year" << setw(20) << "Has children?" << setw(15) << "Salary" << setw(10) << "Category" << endl;
        for (Teacher teacher : teachers) {
            teacher.PrintInformation();
        }

        cout << "-----------------------------------------------------------------------------------------------------------------" << endl;

        cout << "\t\t\t\t\tStudents\n" << endl;
        cout << left << setw(20) << "Name" << setw(20) << "Gender" << setw(20) << "Birth year" << setw(15) << "Scholarship" << setw(20) << "Group" << setw(10) << "Course" << endl;
        for (Student student : students) {
            student.PrintInformation();
        }

        cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
    }
};
